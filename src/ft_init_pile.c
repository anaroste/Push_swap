/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_pile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 16:15:22 by anaroste          #+#    #+#             */
/*   Updated: 2018/04/18 17:09:41 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/checker.h"

static int	ft_increase_pile(int **pile, int *option)
{
	int		*tmp;
	int		i;

	i = 0;
	++(*pile)[0];
	tmp = *pile;
	if (!(*pile = (int*)malloc(sizeof(int) * (tmp[0] + 2))))
		return (ft_error(option[2], "malloc error\n"));
	while (i < tmp[0] + 1)
	{
		(*pile)[i] = tmp[i];
		++i;
	}
	ft_memdel((void**)&tmp);
	return (1);
}

static int	ft_wich_number(int **pile_a, char *line, int *option)
{
	int	i;

	i = 0;
	while (line[i])
	{
		while (ft_strchr(" \n\t\f\v\r", line[i]))
			++i;
		if (line[i] == 0 || line[i] == 1)
			return (1);
		if (!ft_is_valid_number(&line[i], option))
			return (0);
		if (!ft_increase_pile(pile_a, option))
			return (0);
		(*pile_a)[(*pile_a)[0]] = ft_atoi(&line[i]);
		if (line[i] == '-' || line[i] == '+')
			++i;
		while (ft_isdigit(line[i]))
			++i;
	}
	return (1);
}

static int	ft_init_with_file(int **pile_a, char *file, int *option)
{
	int		fd;
	int		verif;
	char	*line;

	if (!(*pile_a = (int*)malloc(sizeof(int))))
		return (ft_error(option[2], "malloc error\n"));
	(*pile_a)[0] = 0;
	if (!(fd = open(file, O_RDONLY)))
		return (ft_error(option[2], "open error\n"));
	while ((verif = get_next_line(fd, &line)) > 0)
	{
		if (!ft_wich_number(pile_a, line, option))
			return (0);
		ft_strdel(&line);
	}
	if (verif == -1)
		return (ft_error(option[2], "GNL error\n"));
	ft_strdel(&line);
	if ((close(fd) == -1))
		return (ft_error(option[2], "close error\n"));
	return (1);
}

static int	ft_second(int **pile_a, char **av, int *option, int *spaces)
{
	if (!ft_is_valid_number(&av[option[0]][*spaces], option))
		return (0);
	ft_increase_pile(pile_a, option);
	(*pile_a)[(*pile_a)[0]] = ft_atoi(&av[option[0]][*spaces]);
	if (av[option[0]][*spaces] == '+' || av[option[0]][*spaces] == '-')
		++(*spaces);
	while (ft_isdigit(av[option[0]][*spaces]))
		++(*spaces);
	return (1);
}

int			ft_init_pile_a(int **pile_a, int ac, char **av, int *option)
{
	int	spaces;

	if (option[1])
	{
		if (option[1] >= ac)
			return (ft_error(option[2], "missing file with flag -f\n"));
		return (ft_init_with_file(pile_a, av[option[1]], option));
	}
	if (!(*pile_a = (int*)malloc(sizeof(int))))
		return (0);
	(*pile_a)[0] = 0;
	while (option[0] < ac)
	{
		spaces = 0;
		while (av[option[0]][spaces])
		{
			while (av[option[0]][spaces] && av[option[0]][spaces] == ' ')
				++spaces;
			if (av[option[0]][spaces])
				if (!ft_second(pile_a, av, option, &spaces))
					return (0);
		}
		++option[0];
	}
	return (1);
}

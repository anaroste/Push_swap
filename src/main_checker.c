/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 16:20:16 by anaroste          #+#    #+#             */
/*   Updated: 2018/04/20 11:37:57 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/checker.h"

static int		ft_second_main(int **pile_a, int **pile_b, int *options, int *c)
{
	char	*line;
	int		i;
	int		verif;

	i = 0;
	while (get_next_line(0, &line) > 0)
	{
		if (!(verif = ft_what_to_do(pile_a, pile_b, line)))
			return (ft_error(options[2], "invalid instruction\n"));
		if (options[3])
			ft_print_piles(*pile_a, *pile_b, line);
		ft_strdel(&line);
		if (verif == 2)
			break ;
		++(*c);
	}
	while (++i < (*pile_a)[0])
		if ((*pile_a)[i] > (*pile_a)[i + 1])
			return (ft_failure(options[2], "pile_a is not well sorted\n"));
	if ((*pile_b)[0] != 0)
		return (ft_failure(options[2], "pile_b is not empty\n"));
	return (1);
}

int				main(int ac, char **av)
{
	int		*pile_a;
	int		*pile_b;
	int		*opt;
	int		count;

	if (ac < 2)
		return (0);
	if (!ft_options(&opt, ac, av))
		return (0);
	if (!ft_init_pile_a(&pile_a, ac, av, opt) || !ft_verif_pile(pile_a, opt))
		return (0);
	if (!(pile_b = (int*)malloc(sizeof(int) * (pile_a[0] + 1))))
		return (0);
	pile_b[0] = 0;
	if (opt[3])
		ft_print_piles(pile_a, pile_b, "start");
	if (ft_second_main(&pile_a, &pile_b, opt, &count))
		write(1, "OK\n", 3);
	free(pile_a);
	free(pile_b);
	free(opt);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 09:33:17 by anaroste          #+#    #+#             */
/*   Updated: 2018/03/12 19:01:58 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/checker.h"

static int		ft_read(char ***tab)
{
	char	*tmp;
	char	*tmp2;
	char	*str;
	char	*rom;

	str = malloc(1);
	*str = '\0';
	tmp = NULL;
	while (get_next_line(0, &tmp) > 0)
	{
		rom = ft_strjoin(str, tmp);
		tmp2 = str;
		str = ft_strjoin(rom, " ");
		ft_strdel(&tmp2);
		ft_strdel(&tmp);
		ft_strdel(&rom);
	}
	*tab = ft_strsplit(str, ' ');
	ft_strdel(&str);
	return (0);
}

int				main(int ac, char **av)
{
	t_pile		pile;
	int			i;
	char		**tab;

	i = 0;
	if (!(pile.a = (int *)malloc(sizeof(int) * ac)))
		return (0);
	if (!(pile.b = (int *)malloc(sizeof(int) * ac)))
		return (0);
	pile.a[0] = ac - 1;
	pile.b[0] = 0;
	while (++i < ac)
		pile.a[i] = ft_atoi(av[i]);
	ft_read(&tab);
	if (!(ft_check(tab, &pile)))
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
	free(pile.a);
	free(pile.b);
	return (0);
}

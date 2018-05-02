/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_options.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 16:16:37 by anaroste          #+#    #+#             */
/*   Updated: 2018/04/19 09:48:52 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/checker.h"

/*
**la case 0 correspond a l'index de l'argument suivant les flags
**-e affiche les erreurs de facon plus precise
**-v affiche l'etat des piles a chaque coup
*/

static int	ft_valid_option(char **av, int index, int **options)
{
	if (!ft_strcmp(av[index], "-e") && (*options)[2] == 0)
		(*options)[2] = 1;
	else if (!ft_strcmp(av[index], "-v") && (*options)[3] == 0)
		(*options)[3] = 1;
	else
		return (0);
	return (1);
}

int			ft_options(int **options, int ac, char **av)
{
	int	i;

	i = 1;
	if (!((*options) = (int*)malloc(sizeof(int) * 4)))
		return (0);
	while (!ft_isnumber(av[i]) && i < ac - 1)
		++i;
	(*options)[0] = i;
	(*options)[1] = 0;
	(*options)[2] = 0;
	(*options)[3] = 0;
	if (ft_isnumber(av[i]))
		--i;
	while (i > 0)
	{
		if (!ft_valid_option(av, i, options))
			return (ft_error((*options)[2], "invalid option\n"));
		--i;
	}
	return (1);
}

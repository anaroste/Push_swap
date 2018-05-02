/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_pile.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 16:19:25 by anaroste          #+#    #+#             */
/*   Updated: 2018/04/27 10:13:08 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/checker.h"

int		ft_verif_pile(int *pile, int *opt)
{
	int		to_verif;
	int		i;

	to_verif = 0;
	while (++to_verif < pile[0])
	{
		i = to_verif;
		while (++i <= pile[0])
		{
			if (pile[to_verif] == pile[i])
				return (ft_error(opt[2], "double number"));
		}
	}
	return (1);
}

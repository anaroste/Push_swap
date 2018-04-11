/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_part_two.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 11:58:04 by anaroste          #+#    #+#             */
/*   Updated: 2018/03/10 16:59:56 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/checker.h"

int			ft_ra(t_pile *pile)
{
	int		tmp;
	int		i;

	if (pile->a[0] == 0)
		return (0);
	tmp = pile->a[1];
	i = 2;
	while (i <= pile->a[0])
	{
		pile->a[i - 1] = pile->a[i];
		i++;
	}
	pile->a[pile->a[0]] = tmp;
	return (1);
}

int			ft_rb(t_pile *pile)
{
	int		tmp;
	int		i;

	if (pile->b[0] == 0)
		return (0);
	tmp = pile->b[1];
	i = 2;
	while (i <= pile->b[0])
	{
		pile->b[i - 1] = pile->b[i];
		i++;
	}
	pile->b[pile->b[0]] = tmp;
	return (1);
}

int			ft_rr(t_pile *pile)
{
	if (!(ft_ra(pile)))
		return (0);
	if (!(ft_rb(pile)))
		return (0);
	return (1);
}

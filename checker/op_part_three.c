/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_part_two.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 11:58:04 by anaroste          #+#    #+#             */
/*   Updated: 2018/03/10 17:19:28 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/checker.h"

int			ft_rra(t_pile *pile)
{
	int		tmp;
	int		i;

	if (pile->a[0] == 0)
		return (0);
	tmp = pile->a[pile->a[0]];
	i = pile->a[0];
	while (i >= 2)
	{
		pile->a[i] = pile->a[i - 1];
		i--;
	}
	pile->a[1] = tmp;
	return (1);
}

int			ft_rrb(t_pile *pile)
{
	int		tmp;
	int		i;

	if (pile->b[0] == 0)
		return (0);
	tmp = pile->b[pile->b[0]];
	i = pile->b[0];
	while (i >= 2)
	{
		pile->b[i] = pile->b[i - 1];
		i--;
	}
	pile->b[1] = tmp;
	return (1);
}

int			ft_rrr(t_pile *pile)
{
	if (!(ft_rra(pile)))
		return (0);
	if (!(ft_rrb(pile)))
		return (0);
	return (1);
}

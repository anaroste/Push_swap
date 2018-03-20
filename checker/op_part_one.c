/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_part_one.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 10:28:24 by anaroste          #+#    #+#             */
/*   Updated: 2018/03/10 16:07:40 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/checker.h"

int		ft_sa(t_pile *pile)
{
	int		tmp;

	if (pile->a[0] < 2)
		return (0);
	tmp = pile->a[1];
	pile->a[1] = pile->a[2];
	pile->a[2] = tmp;
	return (1);
}

int		ft_sb(t_pile *pile)
{
	int		tmp;

	if (pile->b[0] < 2)
		return (0);
	tmp = pile->b[1];
	pile->b[1] = pile->b[2];
	pile->b[2] = tmp;
	return (1);
}

int		ft_ss(t_pile *pile)
{
	if (!(ft_sa(pile)))
		return (0);
	if (!(ft_sb(pile)))
		return (0);
	return (1);
}

int		ft_pa(t_pile *pile)
{
	int		tmp;
	int		i;

	i = 1;
	if (pile->b[0] == 0)
		return (0);
	tmp = pile->b[1];
	while (pile->b[0] > i)
	{
		pile->b[i] = pile->b[i + 1];
		i++;
	}
	pile->b[0] -= 1;
	i = pile->a[0];
	while (i > 0)
	{
		pile->a[i + 1] = pile->a[i];
		i--;
	}
	pile->a[1] = tmp;
	pile->a[0] += 1;
	return (1);
}

int		ft_pb(t_pile *pile)
{
	int		tmp;
	int		i;

	i = 1;
	if (pile->a[0] == 0)
		return (0);
	tmp = pile->a[1];
	while (pile->a[0] > i)
	{
		pile->a[i] = pile->a[i + 1];
		i++;
	}
	pile->a[0] -= 1;
	i = pile->b[0];
	while (i > 0)
	{
		pile->b[i + 1] = pile->b[i];
		i--;
	}
	pile->b[1] = tmp;
	pile->b[0] += 1;
	return (1);
}

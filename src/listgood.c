/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listgood.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 18:01:20 by anaroste          #+#    #+#             */
/*   Updated: 2018/05/11 14:55:40 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static void		ra_sa(t_top *t)
{
	ft_ra(t, 6);
	if (t->a->nbr > t->a->next->nbr)
		ft_sa(t, 1);
}

static int		ft_good(t_top *t)
{

	if (ft_listlen(t->a) == 3)
		ra_sa(t);
	else
		return (1);
	return (0);
}

int				ft_listgood(t_top *t)
{
	t_pile		*tmp;

	tmp = t->a;
	if (t->a->nbr < t->a->next->nbr)
	{
		while (t->a->next)
		{
			if (t->a->nbr > t->a->next->nbr)
			{
				t->a = tmp;
				return (1);
			}
			t->a = t->a->next;
		}
	}
	else
	{
		if (ft_good(t) == 1)
			return (1);
	}
	return (0);
}

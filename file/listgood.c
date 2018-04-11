/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   listgood.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/10 18:01:20 by anaroste          #+#    #+#             */
/*   Updated: 2018/04/11 13:55:21 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static int		ft_good(t_top *t)
{
	t_pile		*tmp;
	int			i;

	i = 0;
	tmp = t->a;
	while (t->a->next)
	{
		if (t->a->nbr < t->a->next->nbr)
		{
			t->a = tmp;
			return (1);
		}
		i++;
		t->a = t->a->next;
	}
	t->a = tmp;
	while (i--)
		ft_ra(t, 6);
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

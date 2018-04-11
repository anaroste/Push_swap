/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_pile.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/11 10:37:21 by anaroste          #+#    #+#             */
/*   Updated: 2018/04/11 18:33:50 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static int		smaller_one(t_top *t, int scro)
{
	t_pile	*tmp;
	int		nbr;
	int		ret;

	tmp = t->a;
	nbr = t->a->nbr;
	ret = (t->a->l_pst < t->a->r_pst) ? t->a->l_pst : t->a->r_pst;
	while (t->a)
	{
		if (t->a->nbr < nbr)
		{
			ret = (t->a->l_pst < t->a->r_pst) ? t->a->l_pst : t->a->r_pst;
			nbr = t->a->nbr;
		}
		t->a = t->a->next;
	}
	t->a = tmp;
	return ((scro == 0) ? ret : nbr);
}

static int		listgood(t_top *t)
{
	t_pile		*tmp;

	tmp = t->a;
	if (ft_listlen(t->a) == 2)
	{
		if (t->a->nbr > t->a->next->nbr)
			ft_sa(t, 1);
		return (0);
	}
	else
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
	return (0);
}

void			ft_little_pile(t_top *t)
{
	t_pile		*tmp;
	t_stock		s;
	int			nbr;

	while (listgood(t) == 1)
	{
		tmp = t->a;
		ft_resetpst(t);
		nbr = smaller_one(t, 1);
		while (t->a->nbr != nbr)
			t->a = t->a->next;
		if (t->a->l_pst < t->a->r_pst)
		{
			nbr = t->a->l_pst;
			t->a = tmp;
			while (nbr > 0)
			{
				ft_ra(t, 6);
				nbr--;
			}
		}
		else
		{
			nbr = t->a->r_pst;
			t->a = tmp;
			while (nbr > 0)
			{
				ft_rra(t, 9);
				nbr--;
			}
		}
		ft_pb(t, 5);
	}
	while (t->b)
		ft_pa(t, 4);
}

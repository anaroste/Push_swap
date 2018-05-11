/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_fit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <anaroste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 10:24:55 by anaroste          #+#    #+#             */
/*   Updated: 2018/04/20 11:33:46 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int				good_place(t_top *t, int nbr, int ret)
{
	t_pile	*tmp;

	tmp = t->b;
	ret = (t->b->l_pst < t->b->r_pst) ? t->b->l_pst : t->b->r_pst;
	if ((bigger(t, nbr) == 0) || (smaller(t, nbr) == 0))
		return (bigger_one(t, 0));
	while (t->b)
	{
		if (t->b->next == NULL)
		{
			t->b = tmp;
			ret = (t->b->l_pst < t->b->r_pst) ? t->b->l_pst : t->b->r_pst;
			return (ret);
		}
		else if ((t->b->nbr > nbr && t->b->next->nbr < nbr))
		{
			t->b = t->b->next;
			ret = (t->b->l_pst < t->b->r_pst) ? t->b->l_pst : t->b->r_pst;
			t->b = tmp;
			return (ret);
		}
		t->b = t->b->next;
	}
	t->b = tmp;
	return (ret);
}

int				best_place(t_top *t, int nbr, int nb)
{
	t_pile	*tmp;

	tmp = t->b;
	nb = t->b->nbr;
	if ((bigger(t, nbr) == 0) || (smaller(t, nbr) == 0))
		return (bigger_one(t, 1));
	while (t->b)
	{
		if (t->b->next == NULL)
		{
			t->b = tmp;
			nb = t->b->nbr;
			return (nb);
		}
		else if ((t->b->nbr > nbr && t->b->next->nbr < nbr))
		{
			t->b = t->b->next;
			nb = t->b->nbr;
			t->b = tmp;
			return (nb);
		}
		t->b = t->b->next;
	}
	t->b = tmp;
	return (nb);
}

int				best_fit(t_top *t)
{
	t_fit	f;

	f.tmp = t->a;
	f.fit = 2147483647;
	while (t->a)
	{
		f.test = (t->a->l_pst < t->a->r_pst) ? t->a->l_pst : t->a->r_pst;
		f.test += good_place(t, t->a->nbr, 0);
		if (f.test < f.fit)
		{
			f.fit = f.test;
			f.nbr = t->a->nbr;
		}
		t->a = t->a->next;
	}
	t->a = f.tmp;
	return (f.nbr);
}

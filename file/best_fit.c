/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   best_fit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <anaroste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 10:24:55 by anaroste          #+#    #+#             */
/*   Updated: 2018/04/12 11:10:00 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static int		bigger(t_top *t, int nbr)
{
	t_pile	*tmp;

	tmp = t->b;
	while (t->b)
	{
		if (t->b->nbr > nbr)
			return (1);
		t->b = t->b->next;
	}
	t->b = tmp;
	return (0);
}

int				bigger_one(t_top *t, int scro)
{
	t_pile	*tmp;
	int		nbr;
	int		ret;

	tmp = t->b;
	nbr = t->b->nbr;
	ret = (t->b->l_pst < t->b->r_pst) ? t->b->l_pst : t->b->r_pst;
	while (t->b)
	{
		if (t->b->nbr > nbr)
		{
			ret = (t->b->l_pst < t->b->r_pst) ? t->b->l_pst : t->b->r_pst;
			nbr = t->b->nbr;
		}
		t->b = t->b->next;
	}
	t->b = tmp;
	return ((scro == 0) ? ret : nbr);
}

int				good_place(t_top *t, int nbr, int ret)
{
	t_pile	*tmp;

	tmp = t->b;
	ret = (t->b->l_pst < t->b->r_pst) ? t->b->l_pst : t->b->r_pst;
	if (bigger(t, nbr) == 0)
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
	if (bigger(t, nbr) == 0)
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

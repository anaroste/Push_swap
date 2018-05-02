/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smaller_bigger.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 11:16:14 by anaroste          #+#    #+#             */
/*   Updated: 2018/04/20 11:17:57 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int		smaller(t_top *t, int nbr)
{
	t_pile		*tmp;

	tmp = t->b;
	while (t->b)
	{
		if (t->b->nbr < nbr)
		{
			t->b = tmp;
			return (1);
		}
		t->b = t->b->next;
	}
	t->b = tmp;
	return (0);
}

int		smaller_one(t_top *t, int scro)
{
	t_pile		*tmp;
	int			nbr;
	int			ret;

	tmp = t->b;
	nbr = t->b->nbr;
	ret = (t->b->l_pst < t->b->r_pst) ? t->b->l_pst : t->b->r_pst;
	while (t->b)
	{
		if (t->b->nbr < nbr)
		{
			ret = (t->b->l_pst < t->b->r_pst) ? t->b->l_pst : t->b->r_pst;
			nbr = t->b->nbr;
		}
		t->b = t->b->next;
	}
	t->b = tmp;
	return ((scro == 0) ? ret : nbr);
}

int		bigger(t_top *t, int nbr)
{
	t_pile		*tmp;

	tmp = t->b;
	while (t->b)
	{
		if (t->b->nbr > nbr)
		{
			t->b = tmp;
			return (1);
		}
		t->b = t->b->next;
	}
	t->b = tmp;
	return (0);
}

int		bigger_one(t_top *t, int scro)
{
	t_pile		*tmp;
	int			nbr;
	int			ret;

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

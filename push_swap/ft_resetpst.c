/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_resetpst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 13:53:57 by anaroste          #+#    #+#             */
/*   Updated: 2018/04/04 14:58:24 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static void		ft_reset_a(t_top *t)
{
	int		len_a;
	int		len;
	t_pile	*tmp;

	len_a = ft_listlen(t->a);
	len = 0;
	tmp = t->a;
	while (t->a)
	{
		t->a->l_pst = len++;
		t->a->r_pst = len_a--;
		t->a = t->a->next;
	}
	t->a = tmp;
}

static void		ft_reset_b(t_top *t)
{
	int		len_b;
	int		len;
	t_pile	*tmp;

	len_b = ft_listlen(t->b);
	len = 0;
	tmp = t->b;
	while (t->b)
	{
		t->b->l_pst = len++;
		t->b->r_pst = len_b--;
		t->b = t->b->next;
	}
	t->b = tmp;
}

void			ft_resetpst(t_top *t)
{
	ft_reset_a(t);
	ft_reset_b(t);
}


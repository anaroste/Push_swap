/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 10:37:58 by anaroste          #+#    #+#             */
/*   Updated: 2018/04/08 19:19:17 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void	ft_ra(t_top *t, int scro)
{
	t_pile		*tmp;
	t_pile		*head;

	if (t->a && t->a->next)
	{
		tmp = t->a;
		t->a = t->a->next;
		head = t->a;
		tmp->next = NULL;
		while (t->a->next)
			t->a = t->a->next;
		t->a->next = tmp;
		t->a = head;
	}
	ft_resetpst(t);
	ft_write(scro);
}

void	ft_rb(t_top *t, int scro)
{
	t_pile		*tmp;
	t_pile		*head;

	if (t->b && t->b->next)
	{
		tmp = t->b;
		t->b = t->b->next;
		head = t->b;
		tmp->next = NULL;
		while (t->b->next)
			t->b = t->b->next;
		t->b->next = tmp;
		t->b = head;
	}
	ft_resetpst(t);
	ft_write(scro);
}

void	ft_rr(t_top *t, int scro)
{
	ft_ra(t, 0);
	ft_rb(t, 0);
	ft_write(scro);
}

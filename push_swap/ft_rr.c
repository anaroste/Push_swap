/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 10:43:08 by anaroste          #+#    #+#             */
/*   Updated: 2018/04/04 10:46:13 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void	ft_rra(t_top *t)
{
	t_pile		*head;
	t_pile		*tmp;

	if (t->a && t->a->next)
	{
		head = t->a;
		while (t->a->next->next)
			t->a = t->a->next;
		tmp = t->a->next;
		t->a->next = NULL;
		t->a = head;
		tmp->next = t->a;
		t->a = tmp;
	}
}

void	ft_rrb(t_top *t)
{
	t_pile		*head;
	t_pile		*tmp;

	if (t->b && t->b->next)
	{
		head = t->b;
		while (t->b->next->next)
			t->b = t->b->next;
		tmp = t->b->next;
		t->b->next = NULL;
		t->b = head;
		tmp->next = t->b;
		t->b = tmp;
	}
}

void	ft_rrr(t_top *t)
{
	ft_rra(t);
	ft_rrb(t);
}

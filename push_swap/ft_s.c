/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 09:56:08 by anaroste          #+#    #+#             */
/*   Updated: 2018/04/04 10:34:57 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void	ft_sa(t_top *t)
{
	t_pile *tmp;

	if (t->a && t->a->next)
	{
		tmp = t->a->next;
		t->a->next = t->a->next->next;
		tmp->next = t->a;
		t->a = tmp;
	}
}

void	ft_sb(t_top *t)
{
	t_pile *tmp;

	if (t->b && t->b->next)
	{
		tmp = t->b->next;
		t->b->next = t->b->next->next;
		tmp->next = t->b;
		t->b = tmp;
	}
}

void	ft_ss(t_top *t)
{
	ft_sa(t);
	ft_sb(t);
}

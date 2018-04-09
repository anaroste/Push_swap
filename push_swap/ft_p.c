/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 10:35:23 by anaroste          #+#    #+#             */
/*   Updated: 2018/04/08 19:21:52 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void	ft_pa(t_top *t, int scro)
{
	t_pile *tmp;

	if (t->b)
	{
		tmp = t->b->next;
		t->b->next = t->a;
		t->a = t->b;
		t->b = tmp;
	}
	ft_resetpst(t);
	ft_write(scro);
}

void	ft_pb(t_top *t, int scro)
{
	t_pile *tmp;

	if (t->a)
	{
		tmp = t->a->next;
		t->a->next = t->b;
		t->b = t->a;
		t->a = tmp;
	}
	ft_resetpst(t);
	ft_write(scro);
}

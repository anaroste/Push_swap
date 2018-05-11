/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 15:28:17 by anaroste          #+#    #+#             */
/*   Updated: 2018/04/10 19:42:58 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static void		la_lb(t_top *t, t_stock *s)
{
	while (s->l_a > 0 && s->l_b > 0)
	{
		ft_rr(t, 8);
		s->l_a--;
		s->l_b--;
	}
	while (s->l_a > 0)
	{
		ft_ra(t, 6);
		s->l_a--;
	}
	while (s->l_b > 0)
	{
		ft_rb(t, 7);
		s->l_b--;
	}
}

static void		la_rb(t_top *t, t_stock *s)
{
	while (s->l_a > 0)
	{
		ft_ra(t, 6);
		s->l_a--;
	}
	while (s->r_b > 0)
	{
		ft_rrb(t, 10);
		s->r_b--;
	}
}

static void		ra_lb(t_top *t, t_stock *s)
{
	while (s->r_a > 0)
	{
		ft_rra(t, 9);
		s->r_a--;
	}
	while (s->l_b > 0)
	{
		ft_rb(t, 7);
		s->l_b--;
	}
}

static void		ra_rb(t_top *t, t_stock *s)
{
	while (s->r_a > 0 && s->r_b > 0)
	{
		ft_rrr(t, 11);
		s->r_a--;
		s->r_b--;
	}
	while (s->r_a > 0)
	{
		ft_rra(t, 9);
		s->r_a--;
	}
	while (s->r_b > 0)
	{
		ft_rrb(t, 10);
		s->r_b--;
	}
}

void			push_swap(t_top *t, t_stock *s)
{
	if (s->r_a == -1 && s->r_b == -1)
		la_lb(t, s);
	else if (s->r_a == -1 && s->l_b == -1)
		la_rb(t, s);
	else if (s->l_a == -1 && s->r_b == -1)
		ra_lb(t, s);
	else
		ra_rb(t, s);
	ft_pb(t, 5);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/07 11:05:00 by anaroste          #+#    #+#             */
/*   Updated: 2018/04/09 18:42:08 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

static void		check_move_b(t_top *t, t_stock *s)
{
	t_pile *tmp;

	tmp = t->b;
	while (t->b->nbr != s->nbr_b)
		t->b = t->b->next;
	if (t->b->l_pst < t->b->r_pst)
	{
		s->l_b = t->b->l_pst;
		s->r_b = -1;
	}
	else
	{
		s->r_b = t->b->r_pst;
		s->l_b = -1;
	}
	t->b = tmp;
}

static void		check_move(t_top *t, t_stock *s)
{
	t_pile *tmp;

	tmp = t->a;
	while (t->a->nbr != s->nbr_a)
		t->a = t->a->next;
	if (t->a->l_pst < t->a->r_pst)
	{
		s->l_a = t->a->l_pst;
		s->r_a = -1;
	}
	else
	{
		s->r_a = t->a->r_pst;
		s->l_a = -1;
	}
	t->a = tmp;
	check_move_b(t, s);
}

static void		comeback_baby(t_top *t)
{
	int		nbr;
	t_pile	*tmp;

	tmp = t->b;
	nbr = bigger_one(t, 1);
	while (t->b->nbr != nbr)
		t->b = t->b->next;
	if (t->b->l_pst < t->b->r_pst)
	{
		nbr = t->b->l_pst;
		t->b = tmp;
		while (nbr--)
			ft_rb(t, 7);
	}
	else
	{
		nbr = t->b->r_pst;
		t->b = tmp;
		while (nbr--)
			ft_rrb(t, 10);
	}
	while (t->b)
		ft_pa(t, 4);
}

static int		create_pile(int ac, char **av, t_top *t)
{
	if (check_error(ac, av, 0, 1) == 1)
		return (1);
	while (ac > 1)
	{
		ft_listcreate(ft_atoll(av[ac - 1]), t);
		ac--;
	}
	if (check_int(t) == 1 || check_doublon(t) == 1)
		return (1);
	return (0);
}

int				main(int ac, char **av)
{
	t_top	t;
	t_stock		s;

	t.mq = 0;
	if (create_pile(ac, av, &t) == 1)
		return (0);
	ft_pb(&t, 5);
	ft_pb(&t, 5);
	while (t.a)
	{
		s.nbr_a = best_fit(&t);
		s.nbr_b = best_place(&t, s.nbr_a);
		check_move(&t, &s);
		push_swap(&t, &s);
	}
	comeback_baby(&t);
	return (0);
}

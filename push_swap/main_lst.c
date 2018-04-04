/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 12:37:55 by anaroste          #+#    #+#             */
/*   Updated: 2018/04/04 16:59:34 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int		main(int ac, char **av)
{
	t_top	t;

	t.mq = 0;
	while (ac > 1)
	{
		ft_listcreate(atoi(av[ac - 1]), &t);
		ac--;
	}
	ft_pb(&t);
	ft_pb(&t);
	ft_pb(&t);
	ft_rr(&t);
	ft_rrr(&t);
	ft_resetpst(&t);

/*	printf("r ");
	while (t.a)
	{
		printf("  %d  ", t.a->r_pst);
		t.a = t.a->next;
	}
	printf("\n");*/
	printf("l   A  r     l   B  r\n");
	while (t.a || t.b)
	{
		if (t.a)
			printf("%d| %2d |%d     ", t.a->l_pst, t.a->nbr, t.a->r_pst);
		else
			printf("                ");
		if (t.b)
			printf("%d| %2d |%d\n", t.b->l_pst, t.b->nbr, t.b->r_pst);
		else
			printf("\n");
		if (t.a)
			t.a = t.a->next;
		if (t.b)
			t.b = t.b->next;
	}
//	printf("\n");
/*	printf("l ");
	while (t.a)
	{
		printf("  %d  ", t.a->l_pst);
		t.a = t.a->next;
	}
	printf("\n");*/
/*	printf("B ");
	while (t.b)
	{
		printf("| %d |", t.b->nbr);
		t.b = t.b->next;
	}
	printf("\n");*/
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_lst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <anaroste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 12:37:55 by anaroste          #+#    #+#             */
/*   Updated: 2018/04/07 11:37:22 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int		good_one(t_top *t);
int		good_place(t_top *t, int nbr);

int		main(int ac, char **av)
{
	t_top	t;

	t.mq = 0;
	while (ac > 1)
	{
		ft_listcreate(ft_atoi(av[ac - 1]), &t);
		ac--;
	}
	ft_pb(&t);
	ft_pb(&t);
	ft_pb(&t);
	ft_pb(&t);
	ft_pb(&t);
	ft_pb(&t);
	ft_pb(&t);
	ft_pb(&t);

	printf("2--> %d\n", best_fit(&t));

	printf("l   A  r     l   B  r\n");
	while (t.a || t.b)
	{
		if (t.a)
			printf("%d| %2d |%d     ", t.a->l_pst, t.a->nbr, t.a->r_pst);
		else
			printf("             ");
		if (t.b)
			printf("%d| %2d |%d\n", t.b->l_pst, t.b->nbr, t.b->r_pst);
		else
			printf("\n");
		if (t.a)
			t.a = t.a->next;
		if (t.b)
			t.b = t.b->next;
	}



	return 0;
}

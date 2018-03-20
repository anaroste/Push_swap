/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 09:33:17 by anaroste          #+#    #+#             */
/*   Updated: 2018/03/12 11:07:18 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/checker.h"

int		main(int ac, char **av)
{
	t_stock		top;
	int			i;

	top.a = NULL;
	top.b = NULL;
	i = 0;
	while (--ac)
		top.a = ft_listcreate(ft_atoi(av[ac]), top.a, i++);

//	ft_ss(&top);

	printf("list len : %d\n", ft_listlen(top.b));
	while (top.a)
	{
		printf(" %d |", top.a->nbr);
		top.a = top.a->next;
	}
	printf("\n");
	return (0);
}

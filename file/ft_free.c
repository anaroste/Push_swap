/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 09:23:35 by anaroste          #+#    #+#             */
/*   Updated: 2018/04/12 10:14:50 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void		free_lst(t_top *t)
{
	t_pile		*tmp;

	while (t->a)
	{
		tmp = t->a;
		t->a = t->a->next;
		free(tmp);
	}
	free(t->a);
}

void		free_tab(char **av)
{
	int		i;

	i = 0;
	while (av[i])
		i++;
	while (--i >= 0)
		free(av[i]);
	free(av);
}

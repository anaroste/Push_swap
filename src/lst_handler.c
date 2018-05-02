/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_handler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/11 13:51:36 by anaroste          #+#    #+#             */
/*   Updated: 2018/04/10 18:02:31 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void			ft_listnew(long long nbr, t_top *t)
{
	if (!(t->a = malloc(sizeof(t_pile))))
		return ;
	t->a->nbr = nbr;
	t->a->next = NULL;
}

void			ft_listadd(long long nbr, t_top *t)
{
	t_pile		*pile;

	if (!(pile = malloc(sizeof(*pile))))
		return ;
	pile->nbr = nbr;
	pile->next = t->a;
	t->a = pile;
}

void			ft_listcreate(long long nbr, t_top *t)
{
	if (t->mq == 0)
	{
		ft_listnew(nbr, t);
		t->mq = 1;
	}
	else
	{
		ft_listadd(nbr, t);
	}
}

int				ft_listlen(t_pile *top)
{
	int		ret;

	ret = 0;
	while (top)
	{
		top = top->next;
		ret++;
	}
	return (ret);
}

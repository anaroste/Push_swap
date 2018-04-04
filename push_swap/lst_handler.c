/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_handler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/11 13:51:36 by anaroste          #+#    #+#             */
/*   Updated: 2018/03/12 10:52:38 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/checker.h"

t_pile			*ft_listnew(int nbr)
{
	t_pile		*pile;

	if (!(pile = malloc(sizeof(*pile))))
		return (NULL);
	pile->nbr = nbr;
	pile->next = NULL;
	return (pile);
}

t_pile			*ft_listadd(int nbr, t_pile *top)
{
	t_pile		*pile;

	if (!(pile = malloc(sizeof(*pile))))
		return (NULL);
	pile->nbr = nbr;
	pile->next = top;
	return (pile);
}

t_pile			*ft_listcreate(int nbr, t_pile *top_a, int mq)
{
	if (mq == 0)
		top_a = ft_listnew(nbr);
	else
		top_a = ft_listadd(nbr, top_a);
	return (top_a);
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

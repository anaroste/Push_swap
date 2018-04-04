/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_part_one.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 10:28:24 by anaroste          #+#    #+#             */
/*   Updated: 2018/03/12 11:04:18 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/checker.h"

static t_pile		*ft_s(t_pile *top)
{
	t_pile		*tmp;

	tmp = top->next;
	top->next = tmp->next;
	tmp->next = top;
	return (tmp);
}

int			ft_sa(t_stock *top)
{
	if (ft_listlen(top->a) >= 2)
		top->a = ft_s(top->a);
	return (1);
}

int			ft_sb(t_stock *top)
{
	if (ft_listlen(top->b) >= 2)
		top->b = ft_s(top->b);
	return (1);
}

int			ft_ss(t_stock *top)
{
	ft_sa(top);
	ft_sb(top);
	return (1);
}

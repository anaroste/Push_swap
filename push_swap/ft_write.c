/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 18:49:45 by anaroste          #+#    #+#             */
/*   Updated: 2018/04/08 19:15:10 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

void		ft_write(int act)
{
	if (act == 1)
		write(1, "sa\n", 3);
	else if (act == 2)
		write(1, "sb\n", 3);
	else if (act == 3)
		write(1, "ss\n", 3);
	else if (act == 4)
		write(1, "pa\n", 3);
	else if (act == 5)
		write(1, "pb\n", 3);
	else if (act == 6)
		write(1, "ra\n", 3);
	else if (act == 7)
		write(1, "rb\n", 3);
	else if (act == 8)
		write(1, "rr\n", 3);
	else if (act == 9)
		write(1, "rra\n", 4);
	else if (act == 10)
		write(1, "rrb\n", 4);
	else if (act == 11)
		write(1, "rrr\n", 4);
}

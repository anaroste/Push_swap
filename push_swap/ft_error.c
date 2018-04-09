/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 15:35:49 by anaroste          #+#    #+#             */
/*   Updated: 2018/04/09 15:56:10 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/push_swap.h"

int		check_error(int ac, char **av, int i, int j)
{
	if (ac == 1)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	while (j < ac)
	{
		while (av[j][i] != '\0')
		{
			if (av[j][0] == '-')
				i++;
			while (av[j][i] >= '0' && av[j][i] <= '9')
				i++;
			while ((av[j][i] < '0' || av[j][i] > '9') && av[j][i] != '\0')
			{
				write(2, "Error\n", 6);
				return (1);
			}
		}
		j++;
		i = 0;
	}
	return (0);
}

int		check_doublon(t_top *t)
{
	t_pile		*tmp;
	t_pile		*ab;

	tmp = t->a;
	while (t->a)
	{
		ab = t->a->next;
		while (ab)
		{
			if (ab->nbr == t->a->nbr)
			{
				t->a = tmp;
				write(2, "Error\n", 6);
				return (1);
			}
			ab = ab->next;
		}
		t->a = t->a->next;
	}
	t->a = tmp;
	return (0);
}

int		check_int(t_top *t)
{
	t_pile		*tmp;

	tmp = t->a;
	while (t->a)
	{
		if (t->a->nbr > 2147483647 || t->a->nbr < -2147483648)
		{
			t->a = tmp;
			write(2, "Error\n", 6);
			return (1);
		}
		t->a = t->a->next;
	}
	t->a = tmp;
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 16:19:00 by anaroste          #+#    #+#             */
/*   Updated: 2018/04/18 16:19:03 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_checker_swap(int **pile)
{
	int		tmp;

	if ((*pile)[0] > 1)
	{
		tmp = (*pile)[1];
		(*pile)[1] = (*pile)[2];
		(*pile)[2] = tmp;
	}
	return (1);
}

int			ft_double_swap(int **pile_a, int **pile_b)
{
	ft_checker_swap(pile_a);
	ft_checker_swap(pile_b);
	return (1);
}

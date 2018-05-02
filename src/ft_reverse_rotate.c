/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 16:18:06 by anaroste          #+#    #+#             */
/*   Updated: 2018/04/18 16:18:11 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_reverse_rotate(int **pile)
{
	int		index;
	int		tmp;

	index = (*pile)[0];
	tmp = (*pile)[index];
	while (index > 1)
	{
		(*pile)[index] = (*pile)[index - 1];
		--index;
	}
	(*pile)[1] = tmp;
	return (1);
}

int		ft_double_reverse_rotate(int **pile_a, int **pile_b)
{
	ft_reverse_rotate(pile_a);
	ft_reverse_rotate(pile_b);
	return (1);
}

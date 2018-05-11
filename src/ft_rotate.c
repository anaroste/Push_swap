/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 16:18:33 by anaroste          #+#    #+#             */
/*   Updated: 2018/04/18 16:18:35 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_rotate(int **pile)
{
	int		index;
	int		tmp;

	index = 1;
	tmp = (*pile)[1];
	while (index < (*pile)[0])
	{
		(*pile)[index] = (*pile)[index + 1];
		++index;
	}
	(*pile)[index] = tmp;
	return (1);
}

int			ft_double_rotate(int **pile_a, int **pile_b)
{
	ft_rotate(pile_a);
	ft_rotate(pile_b);
	return (1);
}

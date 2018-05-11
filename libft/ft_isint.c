/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 11:37:40 by anaroste          #+#    #+#             */
/*   Updated: 2018/05/10 14:14:39 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isint(char *str)
{
	int			i;

	i = 0;
	if (str[i] == '-' || str[i] == '+' || str[i] == ' ')
		i++;
	while (str[i])
	{
		if (str[i] == ' ')
		{
			while (str[i])
			{
				if (str[i] != ' ')
					return (1);
				i++;
			}
			break ;
		}
		if (ft_isdigit(str[i]) == 0)
			return (1);
		i++;
	}
	if (ft_atoll(str) > 2147483647 || ft_atoll(str) < -2147483648)
		return (1);
	return (0);
}

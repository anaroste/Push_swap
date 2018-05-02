/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 11:32:25 by anaroste          #+#    #+#             */
/*   Updated: 2018/04/10 19:46:04 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long		ft_atoll(const char *str)
{
	long long	nbr;
	int			neg;
	int			i;

	i = 0;
	neg = 0;
	nbr = 0;
	if (ft_strcmp("-9223372036854775807", str) == 0)
		return (-9223372036854775807);
	while (((str[i] >= 9) && (str[i] <= 13)) || str[i] == 32)
		i++;
	if (str[i] == '-')
		neg = 1;
	if ((str[i] == '-') || (str[i] == '+'))
		i++;
	while ((str[i]) && ((str[i] >= '0') && (str[i] <= '9')))
	{
		nbr *= 10;
		nbr += (int)str[i] - '0';
		i++;
	}
	if (neg == 1)
		nbr *= -1;
	return (nbr);
}

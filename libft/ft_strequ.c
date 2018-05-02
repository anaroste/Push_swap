/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 15:34:25 by anaroste          #+#    #+#             */
/*   Updated: 2017/11/18 14:45:48 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	size_t		i;
	size_t		count;

	count = 0;
	i = 0;
	if (!s1 || !s2)
		return (0);
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		count = s1[i] - s2[i];
		if (count != 0)
			return (0);
		else
			i++;
	}
	return (1);
}

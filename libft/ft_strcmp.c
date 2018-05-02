/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:03:52 by anaroste          #+#    #+#             */
/*   Updated: 2017/11/16 09:38:37 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	int		i;
	int		count;

	count = 0;
	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		count = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (count != 0)
			return (count);
		else
			i++;
	}
	return (count);
}

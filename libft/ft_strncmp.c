/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:07:06 by anaroste          #+#    #+#             */
/*   Updated: 2017/11/16 09:39:04 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		count;

	count = 0;
	i = 0;
	while (((s1[i] != '\0') || (s2[i] != '\0')) && (n > i))
	{
		count = (unsigned char)s1[i] - (unsigned char)s2[i];
		if (count != 0)
			return (count);
		else
			i++;
	}
	return (count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 15:10:32 by anaroste          #+#    #+#             */
/*   Updated: 2017/11/14 15:42:04 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	int		save;

	i = 0;
	j = 0;
	save = 0;
	if (needle[j] == '\0')
		return ((char *)(&haystack[i]));
	while (haystack[i])
	{
		while (haystack[i] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return ((char *)(&haystack[save]));
			i++;
			j++;
		}
		i = ++save;
		j = 0;
	}
	return (NULL);
}

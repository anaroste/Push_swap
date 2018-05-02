/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:14:17 by anaroste          #+#    #+#             */
/*   Updated: 2017/11/17 16:39:11 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	save;

	i = 0;
	j = 0;
	save = 0;
	if (needle[0] == '\0' && len > 0)
		return ((char*)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		while (haystack[i] == needle[j] && i < len)
		{
			if (needle[j + 1] == '\0')
				return ((char*)&haystack[save]);
			i++;
			j++;
		}
		save++;
		i = save;
		j = 0;
	}
	return (NULL);
}

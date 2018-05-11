/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 14:12:23 by anaroste          #+#    #+#             */
/*   Updated: 2017/11/18 15:52:56 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		count;
	char	*str;

	i = 0;
	count = 0;
	str = NULL;
	if (s != NULL)
	{
		while (s[count])
			count++;
		if ((str = (char *)malloc(sizeof(char) * (count + 1))) == NULL)
			return (NULL);
		while (s[i])
		{
			str[i] = f(s[i]);
			i++;
		}
		str[i] = '\0';
	}
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 12:04:05 by anaroste          #+#    #+#             */
/*   Updated: 2017/11/14 16:29:27 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;
	int		i;

	i = -1;
	if ((str = (char *)malloc(sizeof(char) * (++size))) == NULL)
		return (NULL);
	while (++i < (int)size)
		str[i] = '\0';
	return (str);
}

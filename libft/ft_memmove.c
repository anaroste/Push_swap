/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 18:29:19 by anaroste          #+#    #+#             */
/*   Updated: 2017/11/18 16:27:26 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src1;
	char	*dst1;

	dst1 = (char *)dst;
	src1 = (char *)src;
	if ((dst == src) || (len == 0))
		return (dst);
	if (src > dst)
	{
		while (len--)
			*(unsigned char *)dst1++ = *(unsigned char *)src1++;
	}
	else
	{
		dst1 += len;
		src1 += len;
		while (len--)
		{
			src1--;
			dst1--;
			*(unsigned char *)dst1 = *(unsigned char *)src1;
		}
	}
	return (dst);
}

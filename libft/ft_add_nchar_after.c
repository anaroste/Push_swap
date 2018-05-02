/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_nchar_after.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/14 13:46:13 by anaroste          #+#    #+#             */
/*   Updated: 2018/04/10 19:46:32 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void			ft_add_nchar_after(char **string, int nb, char c)
{
	char	*str;
	char	*tmp;
	int		i;

	i = 0;
	tmp = (char *)malloc(sizeof(char) * (ft_strlen(*string) + 1 + nb));
	str = (char *)malloc(sizeof(char) * (nb + 1));
	while (*string[i])
	{
		tmp[i] = *string[i];
		i++;
	}
	tmp[i] = '\0';
	i = 0;
	while (nb--)
		str[i++] = c;
	str[i] = '\0';
	*string = ft_strcat(tmp, str);
}

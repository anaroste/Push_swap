/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   white.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 09:34:01 by anaroste          #+#    #+#             */
/*   Updated: 2017/11/17 13:55:19 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_count_words(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	if (s[i] != c && s[i] != '\0')
		count++;
	while (s[i] != c && s[i] != '\0')
		i++;
	while (s[i] == c)
	{
		i++;
		if (s[i] != c && s[i] != '\0')
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
	}
	return (count);
}

static char			*ft_new_word(char const *str, char c)
{
	int		i;
	int		j;
	char	*dest;

	i = 0;
	j = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	dest = (char*)malloc((sizeof(char)) * (i + 1));
	if (dest == NULL)
		return (NULL);
	while (j < i)
	{
		dest[j] = str[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char				**ft_strsplit(char const *s, char c)
{
	char	**big_tab;
	int		i;
	int		j;
	int		words;

	if (s == NULL)
		return (NULL);
	words = ft_count_words(s, c);
	big_tab = (char**)malloc(sizeof(char*) * (words + 1));
	if (big_tab == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < words && s[j] != '\0')
	{
		if (s[j] != c)
			big_tab[i++] = ft_new_word(&s[j++], c);
		while (s[j] != c && s[j] != '\0')
			j++;
		while (s[j] == c)
			j++;
	}
	big_tab[i] = NULL;
	return (big_tab);
}

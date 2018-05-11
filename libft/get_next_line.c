/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/16 12:29:53 by anaroste          #+#    #+#             */
/*   Updated: 2018/03/10 09:20:35 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_read(const int fd, char **str)
{
	int		ret;
	char	buf[GNL_BUFF_SIZE + 1];
	int		count;
	char	*tmp;

	count = 0;
	while ((ret = read(fd, buf, GNL_BUFF_SIZE)))
	{
		buf[ret] = '\0';
		count += ret;
		if (*str == NULL)
			*str = ft_strdup(buf);
		else
		{
			tmp = *str;
			*str = ft_strjoin(tmp, buf);
			ft_strdel(&tmp);
		}
		if (ft_strchr(buf, 10) != NULL)
			break ;
	}
	return (ret);
}

static size_t	ft_strlen_nl(const char *s)
{
	size_t		i;

	i = 0;
	while ((s[i] != '\n') && (s[i] != '\0'))
		i++;
	return (i);
}

int				get_next_line(const int fd, char **line)
{
	static char	*all_line = NULL;
	int			ret;
	char		buf[GNL_BUFF_SIZE + 1];
	char		*tmp;

	if (fd < 0 || line == NULL || (ret = read(fd, buf, 0) != 0))
		return (-1);
	ret = ft_read(fd, &all_line);
	if (all_line == NULL && ret == 0)
		return (0);
	*line = ft_strsub(all_line, 0, ft_strlen_nl(all_line));
	tmp = all_line;
	all_line = ft_strsub(tmp, (ft_strlen_nl(tmp) + 1),
			(ft_strlen(tmp) - ft_strlen_nl(tmp)));
	ft_strdel(&tmp);
	if (all_line[0] == '\0')
		ft_strdel(&all_line);
	return (1);
}

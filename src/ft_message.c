/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_message.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 16:14:57 by anaroste          #+#    #+#             */
/*   Updated: 2018/04/18 16:15:08 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/checker.h"

int		ft_success(int mode, char *str)
{
	if (mode == 0)
		write(1, "OK\n", 3);
	else
		write(1, str, ft_strlen(str));
	return (1);
}

int		ft_failure(int mode, char *str)
{
	if (mode == 0)
		write(1, "KO\n", 3);
	else
		write(1, str, ft_strlen(str));
	return (0);
}

int		ft_error(int mode, char *str)
{
	if (mode == 0)
		write(2, "Error\n", 6);
	else
		write(2, str, ft_strlen(str));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 15:30:11 by anaroste          #+#    #+#             */
/*   Updated: 2017/11/17 16:37:46 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_elem;

	new_elem = (t_list*)malloc(sizeof(t_list));
	if (new_elem == NULL)
		return (NULL);
	new_elem = (f)(lst);
	if (lst == NULL)
		return (NULL);
	if (lst->next != NULL)
		new_elem->next = ft_lstmap(lst->next, (f));
	else
		new_elem->next = NULL;
	return (new_elem);
}

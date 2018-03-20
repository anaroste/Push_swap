/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 15:46:16 by anaroste          #+#    #+#             */
/*   Updated: 2018/03/12 17:25:58 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/checker.h"

static int			ft_foret(char *op, t_pile *pile)
{
	if (!ft_strcmp(op, "sa"))
		ft_sa(pile);
	else if (!ft_strcmp(op, "sb"))
		ft_sb(pile);
	else if (!ft_strcmp(op, "ss"))
		ft_ss(pile);
	else if (!ft_strcmp(op, "pa"))
		ft_pa(pile);
	else if (!ft_strcmp(op, "pb"))
		ft_pb(pile);
	else if (!ft_strcmp(op, "ra"))
		ft_ra(pile);
	else if (!ft_strcmp(op, "rb"))
		ft_rb(pile);
	else if (!ft_strcmp(op, "rr"))
		ft_rr(pile);
	else if (!ft_strcmp(op, "rra"))
		ft_rra(pile);
	else if (!ft_strcmp(op, "rrb"))
		ft_rrb(pile);
	else if (!ft_strcmp(op, "rrr"))
		ft_rrr(pile);
	else
		return (0);
	return (1);
}

static int			ft_check_ascii_order(int *pile)
{
	int		i;

	i = 1;
	while (i < pile[0] - 1)
	{
		if (pile[i] > pile[i + 1])
			return (0);
		i++;
	}
	return (1);
}

int					ft_check(char **tab, t_pile *pile)
{
	int		i;

	i = 0;
	while (tab[i])
	{
		ft_foret(tab[i], pile);
		i++;
	}
	if (!(ft_check_ascii_order(pile->a)))
		return (0);
	if (pile->b[0] != 0)
		return (0);
	return (1);
}

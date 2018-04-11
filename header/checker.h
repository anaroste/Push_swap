/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 09:26:29 by anaroste          #+#    #+#             */
/*   Updated: 2018/04/09 19:12:50 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include "../libft/libft.h"

/**
***		STRUCTURE
**/

typedef struct		s_pile
{
	int				*a;
	int				*b;
}					t_pile;

/**
***		PROTOTYPES
**/

int					ft_sa(t_pile *pile);
int					ft_sb(t_pile *pile);
int					ft_ss(t_pile *pile);
int					ft_pa(t_pile *pile);
int					ft_pb(t_pile *pile);
int					ft_ra(t_pile *pile);
int					ft_rb(t_pile *pile);
int					ft_rr(t_pile *pile);
int					ft_rra(t_pile *pile);
int					ft_rrb(t_pile *pile);
int					ft_rrr(t_pile *pile);
int					ft_check(char **tab, t_pile *pile);

t_pile				*ft_listnew(int nbr);
t_pile				*ft_listadd(int nbr, t_pile *top);
t_pile				*ft_listcreate(int nbr, t_pile *top_a, int mq);

#endif

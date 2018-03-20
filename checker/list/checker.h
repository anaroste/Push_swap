/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 09:26:29 by anaroste          #+#    #+#             */
/*   Updated: 2018/03/12 11:06:16 by anaroste         ###   ########.fr       */
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
	int				nbr;
	struct s_pile	*next;
}					t_pile;

typedef struct		s_stock
{
	t_pile		*a;
	t_pile		*b;
}					t_stock;

/**
***		PROTOTYPES
**/

int					ft_sa(t_stock *top);
int					ft_sb(t_stock *top);
int					ft_ss(t_stock *top);
int					ft_pa(t_stock *top);
int					ft_pb(t_stock *top);
int					ft_ra(t_pile *pile);
int					ft_rb(t_pile *pile);
int					ft_rr(t_pile *pile);
int					ft_rra(t_pile *pile);
int					ft_rrb(t_pile *pile);
int					ft_rrr(t_pile *pile);
int					ft_check(t_pile *pile);

int					ft_listlen(t_pile *top);
t_pile				*ft_listnew(int nbr);
t_pile				*ft_listadd(int nbr, t_pile *top);
t_pile				*ft_listcreate(int nbr, t_pile *top_a, int mq);

#endif

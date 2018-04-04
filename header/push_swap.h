/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 10:03:43 by anaroste          #+#    #+#             */
/*   Updated: 2018/04/04 13:53:05 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"

/**
***				STRUCTURE
**/

typedef struct		s_pile
{
	int				nbr;
	int				r_pst;
	int				l_pst;
	struct s_pile	*next;
}					t_pile;

typedef struct		s_top
{
	int				mq;
	t_pile			*a;
	t_pile			*b;
}					t_top;

/**
***				PROTOTYPES
**/

void				ft_sa(t_top *t);
void				ft_sb(t_top *t);
void				ft_ss(t_top *t);
void				ft_pa(t_top *t);
void				ft_pb(t_top *t);
void				ft_ra(t_top *t);
void				ft_rb(t_top *t);
void				ft_rr(t_top *t);
void				ft_rra(t_top *t);
void				ft_rrb(t_top *t);
void				ft_rrr(t_top *t);

void				ft_listnew(int nbr, t_top *t);
void				ft_listadd(int nbr, t_top *t);
void				ft_listcreate(int nbr, t_top *t);
int					ft_listlen(t_pile *top);

void				ft_resetpst(t_top *t);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaroste <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 10:03:43 by anaroste          #+#    #+#             */
/*   Updated: 2018/04/26 17:48:53 by anaroste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libft.h"

/*
**				STRUCTURES
*/

typedef struct		s_stock
{
	int				nbr_a;
	int				l_a;
	int				r_a;
	int				nbr_b;
	int				l_b;
	int				r_b;
}					t_stock;

typedef struct		s_pile
{
	long long		nbr;
	int				r_pst;
	int				l_pst;
	struct s_pile	*next;
}					t_pile;

typedef struct		s_fit
{
	t_pile			*tmp;
	int				nbr;
	int				fit;
	int				test;
}					t_fit;

typedef struct		s_top
{
	int				mq;
	t_pile			*a;
	t_pile			*b;
}					t_top;

/*
**				PROTOTYPES
*/

void				ft_sa(t_top *t, int scro);
void				ft_sb(t_top *t, int scro);
void				ft_ss(t_top *t, int scro);
void				ft_pa(t_top *t, int scro);
void				ft_pb(t_top *t, int scro);
void				ft_ra(t_top *t, int scro);
void				ft_rb(t_top *t, int scro);
void				ft_rr(t_top *t, int scro);
void				ft_rra(t_top *t, int scro);
void				ft_rrb(t_top *t, int scro);
void				ft_rrr(t_top *t, int scro);

void				ft_listnew(long long nbr, t_top *t);
void				ft_listadd(long long nbr, t_top *t);
void				ft_listcreate(long long nbr, t_top *t);
int					ft_listlen(t_pile *top);
int					ft_listgood(t_top *top);

void				ft_resetpst(t_top *t);
int					good_place(t_top *t, int nbr, int ret);
int					best_fit(t_top *t);
int					best_place(t_top *t, int nbr, int nb);
void				push_swap(t_top *t, t_stock *s);
int					bigger_one(t_top *t, int scro);
int					smaller_one(t_top *t, int scro);
void				ft_write(int act);
int					check_int(t_top *t);
int					check_char(char *av);
int					check_error(int ac, char **av, int i, int j);
int					check_doublon(t_top *t);
void				ft_little_pile(t_top *t);
void				free_lst(t_top *t);
void				free_tab(char **av);
int					bigger(t_top *t, int nbr);
int					smaller(t_top *t, int nbr);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:08:09 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/24 15:51:23 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"
# include <stdio.h>

typedef struct s_lst
{
	int				n;
	struct s_lst	*next;
}				t_lst;


typedef struct s_stack
{
	t_lst	*a;
	t_lst	*b;
	size_t			size_a;
	size_t			size_b;
}				t_stack;


t_lst	*ft_lstnew_int(int nbr);
t_lst	*ft_lstlast_int(t_lst *lst);
void	ft_lstadd_back_int(t_lst **lst, t_lst *new);
void	ft_lstadd_front_int(t_lst **lst, t_lst *new);
int		lst_has_repeated(t_stack *stacks);
void	print_lst(t_stack *stack);
void	pb(t_stack *stacks);
void	pa(t_stack *stacks);
void	sa(t_stack *stacks, int from_ss);
void	sb(t_stack *stacks, int from_ss);
void	ss(t_stack *stacks);
void	ra(t_stack *stacks, int from_rr);
void	rb(t_stack *stacks, int from_rr);
void	rr(t_stack *stacks);
void	rra(t_stack *stacks, int from_rrr);
void	rrb(t_stack *stacks, int from_rrr);
void	rrr(t_stack *stacks);
void	free_stack(t_stack *stack);
void	free_array(char **array);
int		init_stacks(int argc, char **argv, t_stack *stacks);
void	sort(t_stack *stacks);
int		has_init_errors(int argc, char **argv, int from);
int		check_first_param(char *str);
void	init_with_params(int argc, char **argv, t_stack *stacks);
void	init_with_array(int argc, char **array, t_stack *stacks);

#endif

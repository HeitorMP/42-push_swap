/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 14:49:03 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/17 17:33:26 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stack
{
	int		n;
	struct	s_stack	*next;
}				t_stack;


# include "../libft/includes/libft.h"

t_stack	*ft_lstnew_int(int nbr);
t_stack	*ft_lstlast_int(t_stack *lst);
t_stack	*init_stack_a(int argc, char **argv);
t_stack	*init_stack_b(int argc, char **argv);
void	ft_lstadd_back_int(t_stack **lst, t_stack *new);
void	print_stack(t_stack *stack);
void	sa(t_stack *stack_a);
void	sb(t_stack *stack_b);
void	ss(t_stack *stack_a, t_stack *stack_b);
void	pa(t_stack *stack_a, t_stack *stack_b);
void	pb(t_stack *stack_b, t_stack *stack_a);
void	ra(t_stack *stack_a);

#endif
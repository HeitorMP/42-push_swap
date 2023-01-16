/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 14:49:03 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/04 14:49:05 by hmaciel-         ###   ########.fr       */
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
void	ft_lstadd_back_int(t_stack **lst, t_stack *new);
t_stack	*init_stack(int argc, char **argv);

#endif
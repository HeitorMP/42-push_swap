/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 16:08:09 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/18 17:39:07 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/includes/libft.h"

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
void	print_lst(t_lst *stack);


#endif
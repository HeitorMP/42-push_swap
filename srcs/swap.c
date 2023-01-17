/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 12:08:08 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/17 14:22:50 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*sa (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.
sb (swap b): Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements.
ss : sa and sb at the same time.*/

#include "../includes/push_swap.h"

void	sa(t_stack *stack_a)
{
	int	temp;
	if (!(stack_a->n) || !(stack_a->next->n))
		return ;
	temp = stack_a->n;
	stack_a->n = stack_a->next->n;
	stack_a->next->n =  temp;
	ft_printf("sa\n");
}

void	sb(t_stack *stack_b)
{
	int	temp;
	//if (!(stack_b->n) || !(stack_b->next->n))
	//	return ;
	temp = stack_b->n;
	stack_b->n = stack_b->next->n;
	stack_b->next->n =  temp;
	ft_printf("sb\n");
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	sa(stack_a);
	sb(stack_b);
}
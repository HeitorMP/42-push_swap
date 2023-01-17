/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 16:07:29 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/17 16:14:10 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	int	temp;

	temp = stack_a->n;
	stack_a->n = stack_b->n;
	stack_b->n = temp;
	ft_printf("pa\n");
}

void	pb(t_stack *stack_b, t_stack *stack_a)
{
	int	temp;

	temp = stack_b->n;
	stack_b->n = stack_a->n;
	stack_a->n = temp;
	ft_printf("pb\n");
}
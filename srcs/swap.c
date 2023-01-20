/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:43:51 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/20 10:52:51 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	sa(t_stack *stacks)
{
	int	temp;

	if (stacks->size_a < 2)
		return ;
	temp = stacks->a->n;
	stacks->a->n = stacks->a->next->n;
	stacks->a->next->n = temp;
}

void	sb(t_stack *stacks)
{
	int	temp;

	if (stacks->size_b < 2)
		return ;
	temp = stacks->b->n;
	stacks->b->n = stacks->b->next->n;
	stacks->b->next->n = temp;
}

void	ss(t_stack *stacks)
{
	sa(stacks);
	sb(stacks);
}
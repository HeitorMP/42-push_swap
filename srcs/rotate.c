/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:55:08 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/21 08:40:31 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ra(t_stack *stacks)
{
	t_lst	*current;
	t_lst	*temp;

	temp = stacks->a->next;
	current = stacks->a;
	if (stacks->size_a < 2)
		return ;
	while (current->next != NULL)
		current = current->next;
	current->next = stacks->a;
	stacks->a = temp;
	current->next->next = NULL;
}

void	rb(t_stack *stacks)
{
	t_lst	*current;
	t_lst	*temp;

	temp = stacks->b->next;
	current = stacks->b;
	if (stacks->size_b < 2)
		return ;
	while (current->next != NULL)
		current = current->next;
	current->next = stacks->b;
	stacks->b = temp;
	current->next->next = NULL;
}

void	rr(t_stack *stacks)
{
	ra(stacks);
	rb(stacks);
}

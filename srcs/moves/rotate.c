/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:55:08 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/23 12:26:25 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ra(t_stack *stacks, int from_rr)
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
	if (!from_rr)
		ft_printf("ra\n");
}

void	rb(t_stack *stacks, int from_rr)
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
	if (!from_rr)
		ft_printf("rb\n");
}

void	rr(t_stack *stacks)
{
	ra(stacks, 1);
	rb(stacks, 1);
	ft_printf("rr\n");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:55:08 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/20 17:42:20 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

/*ra (rotate a): Shift up all elements of stack a by 1.
The first element becomes the last one.
rb (rotate b): Shift up all elements of stack b by 1.
The first element becomes the last one.
rr : ra and rb at the same time.
rra (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one.
rrb (reverse rotate b): Shift down all elements of stack b by 1.
The last element becomes the first one.
rrr : rra and rrb at the same time.*/

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

void	rra(t_stack *stacks)
{
	t_lst	*new_head;
	t_lst	*new_tail;
	t_lst	*temp;

	if (stacks->size_a < 2)
		return ;
	temp = stacks->a;
	new_head = stacks->a;
	new_tail  = stacks->a;
	while (new_head->next != NULL)
		new_head = new_head->next;
	while (new_tail->next->next != NULL)
		new_tail = new_tail->next;
	new_tail->next = NULL;
	new_head->next = temp;
	stacks->a = new_head;
}

void	rrb(t_stack *stacks)
{
	t_lst	*new_head;
	t_lst	*new_tail;
	t_lst	*temp;

	if (stacks->size_a < 2)
		return ;
	temp = stacks->b;
	new_head = stacks->b;
	new_tail  = stacks->b;
	while (new_head->next != NULL)
		new_head = new_head->next;
	while (new_tail->next->next != NULL)
		new_tail = new_tail->next;
	new_tail->next = NULL;
	new_head->next = temp;
	stacks->b = new_head;
}

void	rrr(t_stack *stacks)
{
	rra(stacks);
	rrb(stacks);
}

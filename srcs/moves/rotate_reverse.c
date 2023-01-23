/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_reverse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 08:35:31 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/23 12:23:31 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rra(t_stack *stacks, int from_rrr)
{
	t_lst	*new_head;
	t_lst	*new_tail;
	t_lst	*temp;

	if (stacks->size_a < 2)
		return ;
	temp = stacks->a;
	new_head = stacks->a;
	new_tail = stacks->a;
	while (new_head->next != NULL)
		new_head = new_head->next;
	while (new_tail->next->next != NULL)
		new_tail = new_tail->next;
	new_tail->next = NULL;
	new_head->next = temp;
	stacks->a = new_head;
	if (!from_rrr)
		ft_printf("rra\n");
}

void	rrb(t_stack *stacks, int from_rrr)
{
	t_lst	*new_head;
	t_lst	*new_tail;
	t_lst	*temp;

	if (stacks->size_a < 2)
		return ;
	temp = stacks->b;
	new_head = stacks->b;
	new_tail = stacks->b;
	while (new_head->next != NULL)
		new_head = new_head->next;
	while (new_tail->next->next != NULL)
		new_tail = new_tail->next;
	new_tail->next = NULL;
	new_head->next = temp;
	stacks->b = new_head;
	if (!from_rrr)
		ft_printf("rrb\n");
}

void	rrr(t_stack *stacks)
{
	rra(stacks, 1);
	rrb(stacks, 1);
	ft_printf("rrr\n");
}

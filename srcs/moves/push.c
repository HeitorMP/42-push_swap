/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:00:55 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/24 11:18:58 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pb(t_stack *stacks)
{
	t_lst	*new;
	t_lst	*old_head;

	old_head = stacks->a;
	if (stacks->size_a == 0)
		return ;
	if (stacks->size_b == 0)
	{
		stacks->b = ft_lstnew_int(stacks->a->n);
		stacks->size_b = 1;
		stacks->size_a--;
	}
	else
	{
		new = ft_lstnew_int(stacks->a->n);
		ft_lstadd_front_int(&stacks->b, new);
		stacks->size_b++;
		stacks->size_a--;
	}
	stacks->a = stacks->a->next;
	ft_printf("pb\n");
	free(old_head);
}

void	pa(t_stack *stacks)
{
	t_lst	*new;
	t_lst	*old_head;

	old_head = stacks->b;
	if (stacks->size_b == 0)
		return ;
	if (stacks->size_a == 0)
	{
		stacks->a = ft_lstnew_int(stacks->b->n);
		stacks->size_a = 1;
		stacks->size_b--;
	}
	else
	{
		new = ft_lstnew_int(stacks->b->n);
		ft_lstadd_front_int(&stacks->a, new);
		stacks->size_a++;
		stacks->size_b--;
	}
	stacks->b = stacks->b->next;
	ft_printf("pa\n");
	free(old_head);
}

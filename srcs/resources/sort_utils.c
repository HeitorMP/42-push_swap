/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:59:52 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/27 15:51:10 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	is_already_sort(t_stack *stacks)
{
	t_lst	*head;
	int		ret;

	ret = 1;
	head = stacks->a;
	while (stacks->a)
	{
		if (stacks->a->next)
		{
			if (stacks->a->n > stacks->a->next->n)
				ret = 0;
		}
		stacks->a = stacks->a->next;
	}
	stacks->a = head;
	return (ret);
}

static void	get_min_simple_only(t_stack *stacks)
{
	int			min;
	t_lst		*head;
	static size_t		size;

	min = INT_MAX;
	head = stacks->a;
	while (stacks->a)
	{
		if (stacks->a->already_simplified == 0)
		{
			if (stacks->a->n < min)
				min = stacks->a->n;
		}
		stacks->a = stacks->a->next;
	}
	stacks->a = head;
	while (stacks->a)
	{
		if (stacks->a->already_simplified == 0 && stacks->a->n == min)
		{
			stacks->a->n = size;
			stacks->a->already_simplified = 1;
		}
		stacks->a = stacks->a->next;
	}
	size++;
	stacks->a = head;
}

void	lst_simplifier(t_stack *stacks)
{
	size_t		size;
	t_lst		*head;

	head = stacks->a;
	size = 0;
	while (size < stacks->size_a)
	{
		get_min_simple_only(stacks);
		size++;
	}
	stacks->a = head;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:59:52 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/26 18:49:07 by hmaciel-         ###   ########.fr       */
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
	t_lst		*min;
	t_lst		*head;
	size_t		size;
	static int	value;

	size = 0;
	min = stacks->a;
	head = stacks->a;
	ft_printf("%d\n" , stacks->a->already_simplified);
	ft_printf("%d\n\n" , stacks->a->next->already_simplified);
	while (stacks->a)
	{
		if (stacks->a->n < min->n)
			min = stacks->a;
		stacks->a = stacks->a->next;
	}
	if (min->already_simplified == 0)
	{
		min->already_simplified = 1;
		min->n = value;
	}
	value++;
	stacks->a = head;
	ft_printf("%d\n" , stacks->a->already_simplified);
	ft_printf("%d\n" , stacks->a->next->already_simplified);
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

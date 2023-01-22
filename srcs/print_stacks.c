/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temp_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 08:39:46 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/22 09:22:51 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static size_t	get_size(t_stack *stacks)
{
	size_t	size;

	size = 0;
	if (stacks->size_a > stacks->size_b)
		size = stacks->size_a;
	else
		size = stacks->size_b;
	return (size);
}

static void	put_node(t_stack *stacks)
{
	size_t	index;
	size_t	size;

	size = get_size(stacks);
	index = 0;
	while (index < size)
	{
		if (index < stacks->size_a)
		{
			ft_printf("\n%d", stacks->a->n);
			stacks->a = stacks->a->next;
		}
		ft_printf("\t");
		if (index < stacks->size_b)
		{
			ft_printf("%d\n", stacks->b->n);
			stacks->b = stacks->b->next;
		}
		index++;
	}
}

void	print_lst(t_stack *stacks)
{
	t_lst	*head_a;
	t_lst	*head_b;

	head_a = stacks->a;
	head_b = stacks->b;
	put_node(stacks);
	ft_printf("\na | b\n");
	stacks->a = head_a;
	stacks->b = head_b;
}

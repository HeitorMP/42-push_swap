/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:02:46 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/27 15:35:57 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	radix_sort(t_stack *stacks)
{
	int	max;
	int	max_bits;
	int	index;
	size_t	index2;
	int temp;
	size_t	size = stacks->size_a;

	index = 0;
	index2 = 0;
	max = (int)stacks->size_a - 1;
	max_bits = 0;
	while( (max >> max_bits) != 0)
		++max_bits;
	while (!is_already_sort(stacks))
	{
		while(index2 < size)
		{
			temp = stacks->a->n;
			if (((temp >> index) & 1) == 1)
				ra(stacks, 0);
			else
				pb(stacks);
			++index2;
		}
		index2 = 0;
		while (stacks->size_b > 0)
			pa(stacks);
		++index;
	}
}

/* void	radix_sort(t_stack *stacks)
{
	int	min;

	while (stacks->size_a > 3)
	{
		min = get_min_stack_a(stacks);
		if (is_best_move_ra(stacks))
		{
			while (stacks->a->n != min)
				ra(stacks, 0);
		}
		else
		{
			while (stacks->a->n != min)
				rra(stacks, 0);
		}
		pb(stacks);
	}
	sort_3(stacks);
	while (stacks->size_b > 0)
		pa(stacks);
} */
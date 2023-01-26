/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 18:02:46 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/26 18:15:50 by hmaciel-         ###   ########.fr       */
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

	index = 0;
	index2 = 0;
	max = get_max_stack_a(stacks);
	max_bits = 0;

	while( (max >> max_bits) != 0)
		max_bits++;
	while(index < max_bits)
	{
		while(index2 < (stacks->size_a - 1))
		{
			temp = stacks->a->n;
			if (((temp >> index) & 1) == 1)
				ra(stacks, 0);
			else
				pb(stacks);
			index2++;
		}
		while (stacks->size_b != 0)
			pa(stacks);
		index++;
	}
}
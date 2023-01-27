/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_router.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:37:53 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/27 13:47:12 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	sort_2(t_stack *stacks)
{
	if (stacks->a->n > stacks->a->next->n)
		sa(stacks, 0);
}

void	sort_3(t_stack *stacks)
{	
	int	a;
	int	b;
	int	c;

	a = stacks->a->n;
	b = stacks->a->next->n;
	c = stacks->a->next->next->n;
	if (a < b && a < c && b > c)
	{
		sa(stacks, 0);
		ra(stacks, 0);
	}
	else if (a > b && a < c && b < c)
		sa(stacks, 0);
	else if (a < b && a > c && b > c)
		rra(stacks, 0);
	else if (a > b && a > c && b < c)
		ra(stacks, 0);
	else if (a > b && a > c && b > c)
	{
		sa(stacks, 0);
		rra(stacks, 0);
	}
}

static void	sort_4(t_stack *stacks)
{
	int		min;

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
	sort_3(stacks);
	pa(stacks);
}

static void	sort_5(t_stack *stacks)
{
	int		min;
	int		index;

	index = 0;
	while (index < 2)
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
		index++;
	}
	sort_3(stacks);
	pa(stacks);
	pa(stacks);
}

void	sort(t_stack *stacks)
{
	if (stacks->size_a == 2)
		sort_2(stacks);
	else if (stacks->size_a == 3)
		sort_3(stacks);
	else if (stacks->size_a == 4)
		sort_4(stacks);
	else if (stacks->size_a == 5)
		sort_5(stacks);
	else
		radix_sort(stacks);
}

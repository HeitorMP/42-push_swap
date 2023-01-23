/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_router.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:37:53 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/23 17:15:56 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	sort_2(t_stack *stacks)
{
	if (stacks->a->n > stacks->a->next->n)
		sa(stacks, 0);
}

static void	sort_3(t_stack *stacks)
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

void	sort(t_stack *stacks)
{
	if (stacks->size_a == 2)
		sort_2(stacks);
	else if (stacks->size_a == 3)
		sort_3(stacks);
}

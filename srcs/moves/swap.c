/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:43:51 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/25 18:06:44 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sa(t_stack *stacks, int from_ss)
{
	int	temp;

	if (stacks->size_a < 2)
		return ;
	temp = stacks->a->n;
	stacks->a->n = stacks->a->next->n;
	stacks->a->next->n = temp;
	if (!from_ss)
		ft_printf("sa\n");
}

void	sb(t_stack *stacks, int from_ss)
{
	int	temp;

	if (stacks->size_b < 2)
		return ;
	temp = stacks->b->n;
	stacks->b->n = stacks->b->next->n;
	stacks->b->next->n = temp;
	if (!from_ss)
		ft_printf("sb\n");
}

void	ss(t_stack *stacks)
{
	sa(stacks, 1);
	sb(stacks, 1);
}

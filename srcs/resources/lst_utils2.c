/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 08:24:17 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/26 14:43:44 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	lst_has_repeated(t_stack *stacks)
{
	t_lst	*temp;
	t_lst	*temp2;

	temp = stacks->a;
	temp2 = stacks->a->next;
	while (temp->next)
	{
		while (temp2)
		{
			if (ft_cmp(temp->n, temp2->n) == 0)
				return (1);
			temp2 = temp2->next;
		}
		temp = temp->next;
		temp2 = temp->next;
	}
	return (0);
}

void	free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

int	get_min_stack_a(t_stack *stacks)
{
	int		min;
	t_lst	*temp;

	min = stacks->a->n;
	temp = stacks->a;
	while (stacks->a)
	{
		if (stacks->a->n < min)
			min = stacks->a->n;
		stacks->a = stacks->a->next;
	}
	stacks->a = temp;
	return (min);
}

int	get_max_stack_a(t_stack *stacks)
{
	int		max;
	t_lst	*temp;

	max = stacks->a->n;
	temp = stacks->a;
	while (stacks->a)
	{
		if (stacks->a->n > max)
			max = stacks->a->n;
		stacks->a = stacks->a->next;
	}
	stacks->a = temp;
	return (max);
}

int	is_best_move_ra(t_stack *stacks)
{
	int		min;
	int		pos;
	t_lst	*head;

	pos = 0;
	min = get_min_stack_a(stacks);
	head = stacks->a;
	while (stacks->a)
	{
		if (stacks->a->n == min)
			break ;
		stacks->a = stacks->a->next;
		pos++;
	}
	stacks->a = head;
	if (pos >= 3)
		return (0);
	return (1);
}

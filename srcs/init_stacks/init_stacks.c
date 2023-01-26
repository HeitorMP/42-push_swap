/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 07:44:52 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/26 17:47:34 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"
/*
	Return value:
	1 - OK
	0 - Only one element passing as param - do nothing.
	-1 - Errors;
*/
void	set_already_simplified(t_stack *stacks)
{
	t_lst	*head;

	head = stacks->a;
	while (stacks->a)
	{
		stacks->a->already_simplified = 0;
		stacks->a = stacks->a->next;
	}
	stacks->a = head;
}

int	init_stacks(int argc, char **argv, t_stack *stacks)
{
	int		count_words;
	char	**array;

	if (argc == 2)
	{
		array = ft_split(argv[1], ' ');
		count_words = ft_count_words(argv[1], ' ');
		if (has_init_errors(count_words, array, 0))
		{
			free(array);
			return (-1);
		}
		init_with_array(count_words, array, stacks);
		if (stacks->size_a < 2)
			return (0);
	}
	else
	{
		if (has_init_errors(argc, argv, 1) == 1)
			return (-1);
		init_with_params(argc, argv, stacks);
		if (stacks->size_a < 2)
			return (0);
	}
	return (1);
}

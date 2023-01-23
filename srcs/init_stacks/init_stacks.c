/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 07:44:52 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/23 17:29:57 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"
/*
	Return value:
	1 - OK
	0 - Only one element passing as param - do nothing.
	-1 - Errors;
*/
int	init_stacks(int argc, char **argv, t_stack *stacks)
{
	int		i;

	i = 1;
	stacks->size_a = argc - 1;
	stacks->size_b = 0;
	stacks->a = NULL;
	stacks->b = NULL;
	if (has_init_errors(argc, argv) == 1)
		return (-1);
	if (stacks->size_a < 2)
		return (0);
	while (i < argc)
	{
		ft_lstadd_back_int(&stacks->a, ft_lstnew_int(ft_atoi(argv[i])));
		i++;
	}
	return (1);
}

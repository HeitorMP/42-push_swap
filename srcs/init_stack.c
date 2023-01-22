/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 07:44:52 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/22 12:19:23 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	init_stack_a(int argc, char **argv, t_stack *stacks)
{
	int		i;

	i = 1;
	stacks->size_a = argc - 1;
	stacks->size_b = 0;
	stacks->a = NULL;
	stacks->b = NULL;
	while (i < argc)
	{
		ft_lstadd_back_int(&stacks->a, ft_lstnew_int(ft_atoi(argv[i])));
		i++;
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_with_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:36:07 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/27 16:32:38 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	init_with_params(int argc, char **argv, t_stack *stacks)
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
}

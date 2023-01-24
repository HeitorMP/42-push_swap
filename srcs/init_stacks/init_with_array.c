/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_with_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 11:37:43 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/24 16:32:40 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	init_with_array(int argc, char **array, t_stack *stacks)
{
	int		i;

	i = 0;
	stacks->size_a = argc;
	stacks->size_b = 0;
	stacks->a = NULL;
	stacks->b = NULL;
	while (array[i])
	{
		ft_lstadd_back_int(&stacks->a, ft_lstnew_int(ft_atoi(array[i])));
		i++;
	}
	free_array(array);
}

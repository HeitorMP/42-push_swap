/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 14:41:16 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/27 17:00:17 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stacks;
	int		init_handler;

	init_handler = init_stacks(argc, argv, &stacks);
	if (init_handler == -1)
	{
		ft_printf("Error\n");
		return (1);
	}
	else if (init_handler == 0)
		return (0);
	if (!is_already_sort(&stacks))
	{
		set_already_simplified(&stacks);
		lst_simplifier(&stacks);
		sort(&stacks);
	}
	//print_lst(&stacks);
	free_stack(&stacks);
}

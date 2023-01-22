/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 14:41:16 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/22 09:10:04 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stacks;

	(void)argc;
	(void)argv;
	init_stack_a(argc, argv, &stacks);
	if(lst_has_repeated(&stacks))
	{
		ft_printf("Error\n");
		return (1);
	}
	ft_printf("INITIAL\n");
	print_lst(&stacks);
	ft_printf("--------SORTED------------\n");
	sa(&stacks);
	pb(&stacks);
	pb(&stacks);
	pb(&stacks);
	sa(&stacks);
	pa(&stacks);
	pa(&stacks);
	pa(&stacks);
	print_lst(&stacks);

	free_all(&stacks);
}

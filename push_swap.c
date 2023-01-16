/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 14:41:16 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/04 14:41:17 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

int	main(int argc, char **argv)
{	
	t_stack *stack_a;

	stack_a = init_stack(argc, argv);
	
	t_stack *current;

	ft_printf("%d\n", current->next->n);
	ft_printf("%d\n", argc);
	current = stack_a;
	while (current)
	{
		ft_printf("%d\n", current->n);
		current = current->next;
	}
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 14:41:16 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/17 17:43:48 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

int	main(int argc, char **argv)
{	
	t_stack *stack_a;
	t_stack	*stack_b;

	stack_a = init_stack_a(argc, argv);
	stack_b = init_stack_b(argc, argv);
	/*ft_printf("stack a\n");
	print_stack(stack_a);
	ft_printf("stack b\n");
	print_stack(stack_b);
	stack_b->n = 9;
	ft_printf("--------------------------\n");
	sa(stack_a);
	sb(stack_b);
	ft_printf("--------------------------\n");
	ft_printf("swap a\n");
	print_stack(stack_a);
	ft_printf("swap b\n");
	print_stack(stack_b);
	ft_printf("swap ab\n");
	ss(stack_a, stack_b);
	print_stack(stack_a);
	print_stack(stack_b);
	ft_printf("--------------------------\n");
	pa(stack_a, stack_b);
	print_stack(stack_a);*/
	print_stack(stack_a);
	ft_printf("--------------------------\n");
	ra(stack_a);
	print_stack(stack_a);


	return (0);
}
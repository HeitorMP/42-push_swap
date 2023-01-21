/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 14:41:16 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/20 16:56:55 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stacks;

	t_lst	*temp;
	t_lst	*temp2;
	t_lst	*temp3;

	(void)argc;
	(void)argv;

	stacks.size_b = 2;
	stacks.size_a = 3;

	stacks.b = ft_lstnew_int(9);
	temp2 = ft_lstnew_int(8);
	ft_lstadd_back_int(&stacks.b, temp2);

	stacks.a = ft_lstnew_int(1);
	temp = ft_lstnew_int(5);
	temp3 = ft_lstnew_int(7);
	ft_lstadd_back_int(&stacks.a, temp);
	ft_lstadd_back_int(&stacks.a, temp3);

	ft_printf("INITIAL\n");
	print_lst(&stacks);
	ft_printf("--------PB------------\n");
	pb(&stacks);
	print_lst(&stacks);
	ft_printf("--------PB------------\n");
	pb(&stacks);
	print_lst(&stacks);
	ft_printf("--------SB------------\n");
	sb(&stacks);
	print_lst(&stacks);
	ft_printf("--------PA------------\n");
	pa(&stacks);
	print_lst(&stacks);
	ft_printf("--------PA------------\n");
	pa(&stacks);
	print_lst(&stacks);
	ft_printf("--------SA------------\n");
	sa(&stacks);
	print_lst(&stacks);
	ft_printf("--------SS------------\n");
	ss(&stacks);
	print_lst(&stacks);
	ft_printf("--------RA------------\n");
	ra(&stacks);
	print_lst(&stacks);
	ft_printf("--------RB------------\n");
	rb(&stacks);
	print_lst(&stacks);
	ft_printf("--------RR------------\n");
	rr(&stacks);
	print_lst(&stacks);

	free_all(&stacks);
}

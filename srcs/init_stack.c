/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 07:44:52 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/22 09:11:42 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	init_stack_a(int argc, char **argv, t_stack *stacks)
{
	t_lst	*temp2;
	t_lst	*temp3;
	t_lst	*temp4;
	t_lst	*temp5;
	t_lst	*temp6;

	(void)argc;
	(void)argv;
	stacks->size_b = 0;
	stacks->size_a = 6;
	stacks->a = ft_lstnew_int(2);
	temp2 = ft_lstnew_int(1);
	temp3 = ft_lstnew_int(3);
	temp4 = ft_lstnew_int(6);
	temp5 = ft_lstnew_int(5);
	temp6 = ft_lstnew_int(1);
	ft_lstadd_back_int(&stacks->a, temp2);
	ft_lstadd_back_int(&stacks->a, temp3);
	ft_lstadd_back_int(&stacks->a, temp4);
	ft_lstadd_back_int(&stacks->a, temp5);
	ft_lstadd_back_int(&stacks->a, temp6);
	return (1);
}

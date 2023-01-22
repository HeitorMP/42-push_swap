/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 14:41:16 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/22 12:20:15 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	stacks;

	(void)argc;
	(void)argv;
	init_stacks(argc, argv, &stacks);
	if(lst_has_repeated(&stacks))
	{
		ft_printf("Error\n");
		return (1);
	}
	//ft_printf("INITIAL\n");
	//print_lst(&stacks);
	//ft_printf("--------SORTED------------\n");
	//print_lst(&stacks);
	if (stacks.a->n > stacks.a->next->n && stacks.a->next->n < stacks.a->next->next->n)
	{
		sa(&stacks);
		ft_printf("sa\n");
	}
	//3 2 1
	else if (stacks.a->n > stacks.a->next->n && stacks.a->next->n > stacks.a->next->next->n)
	{
		ra(&stacks);
		ft_printf("ra\n");
		sa(&stacks);
		ft_printf("sa\n");
	}
	else if (stacks.a->n < stacks.a->next->n && stacks.a->next->n > stacks.a->next->next->n)
	{
		rra(&stacks);
		ft_printf("rra\n");
		sa(&stacks);
		ft_printf("sa\n");
	}


	//print_lst(&stacks);

	free_all(&stacks);
}

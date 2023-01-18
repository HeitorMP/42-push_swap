/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 14:41:16 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/18 17:44:11 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/push_swap.h"

void	ra(t_stack *stacks)
{
	int tmp;

	tmp = stacks->a->n;
	stacks->a->n = stacks->a->next->n;
	stacks->a->next->n = tmp;
}

/*pb (push b): Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.*/

void	pb(t_stack *stacks)
{
	t_lst	*new;
	if (stacks->size_b == 0)
	{
		stacks->b = ft_lstnew_int(stacks->a->n);
		stacks->size_b = 1;
	}
	else
	{
		new = ft_lstnew_int(stacks->a->n);
		ft_lstadd_front_int(&stacks->b, new);
		stacks->size_b++;
		stacks->size_a--;
	}
	stacks->a = stacks->a->next;
}

int	main(int argc, char **argv)
{	
	t_stack	stacks;

	t_lst	*temp;

	(void)argc;
	(void)argv;

	stacks.size_b = 0;
	stacks.size_a = 2;

	stacks.a = ft_lstnew_int(1);
	temp = ft_lstnew_int(5);
	ft_lstadd_back_int(&stacks.a, temp);
	print_lst(stacks.a);
	//ra(&stacks);
	pb(&stacks);
	ft_printf("--------PB------------\n");
	print_lst(stacks.a);
	ft_printf("----------------------\n");
	print_lst(stacks.b);
}
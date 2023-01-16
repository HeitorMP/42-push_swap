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

t_stack	*ft_lstnew_int(int nbr)
{
	t_stack	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->n = nbr;
	node->next = NULL;
	return (node);
}

t_stack	*ft_lstlast_int(t_stack *lst)
{
	while (lst)
	{
		if (lst->next)
			lst = lst->next;
		else
			break ;
	}
	return (lst);
}

void	ft_lstadd_back_int(t_stack **lst, t_stack *new)
{
	t_stack	*node;

	if (!lst[0])
		lst[0] = new;
	else
	{
		node = ft_lstlast_int(*lst);
		node->next = new;
	}
}

int	main(int argc, char **argv)
{	
	t_stack *stack_a;
	
	int i = 1;

	stack_a = ft_lstnew_int(ft_atoi(argv[1]));
	while (++i < argc)
	{
		ft_lstadd_back_int(&stack_a, ft_lstnew_int(ft_atoi(argv[i])));
	}

	i = 1;
	t_stack *head = stack_a;
	while (head)
	{
		ft_printf("%d\n", head->n);
		head = head->next;
	}
	return (0);
}
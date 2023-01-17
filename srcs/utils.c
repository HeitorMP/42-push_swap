/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:26:44 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/17 12:13:48 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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

void	print_stack(t_stack *stack)
{
	t_stack *head;

	head = stack;
	while (stack)
	{
		ft_printf("%d\n", stack->n);
		stack = stack->next;
	}
	stack = head;
}
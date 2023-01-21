/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:37:53 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/20 16:56:15 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_lst	*ft_lstnew_int(int nbr)
{
	t_lst	*node;

	node = malloc(sizeof(t_lst));
	if (!node)
		return (NULL);
	node->n = nbr;
	node->next = NULL;
	return (node);
}

t_lst	*ft_lstlast_int(t_lst *lst)
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

void	ft_lstadd_front_int(t_lst **lst, t_lst *new)
{
	if (!lst)
	{
		*lst = ft_lstnew_int(new->n);
		return ;
	}
	new->next = *lst;
	*lst = new;
}

void	ft_lstadd_back_int(t_lst **lst, t_lst *new)
{
	t_lst	*node;

	if (!lst[0])
		lst[0] = new;
	else
	{
		node = ft_lstlast_int(*lst);
		node->next = new;
	}
}

void	print_lst(t_stack *stack)
{
	t_lst	*head_a;
	t_lst	*head_b;
	size_t		size;
	size_t		index;

	index = 0;
	head_a = stack->a;
	head_b = stack->b;
	if (stack->size_a > stack->size_b)
		size = stack->size_a;
	else
		size = stack->size_b;
	while (index < size)
	{
		if (index < stack->size_a)
		{
			ft_printf("%d", stack->a->n);
			stack->a = stack->a->next;
		}
		ft_printf("\t");
		if (index < stack->size_b)
		{
			ft_printf("%d\n", stack->b->n);
			stack->b = stack->b->next;
		}
		index++;
	}
	ft_printf("\nstk a | stk b\n");
	stack->a = head_a;
	stack->b = head_b;
}

void	free_all(t_stack *stack)
{
	t_lst	*temp;

	while (stack->a != NULL)
	{
		temp = stack->a;
		stack->a = stack->a->next;
		free(temp);
	}
	while (stack->b != NULL)
	{
		temp = stack->b;
		stack->b = stack->b->next;
		free(temp);
	}
}

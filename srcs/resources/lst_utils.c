/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:37:53 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/24 12:55:55 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

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

void	free_stack(t_stack *stack)
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

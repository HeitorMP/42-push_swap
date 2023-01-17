/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 10:26:39 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/17 12:13:50 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*init_stack_a(int argc, char **argv)
{
	t_stack	*lst;
	t_stack	*head;
	int		i;

	i = 1;
	head = ft_lstnew_int(ft_atoi(argv[i]));
	lst = head;
	while (++i < argc)
		ft_lstadd_back_int(&lst, ft_lstnew_int(ft_atoi(argv[i])));
	return(head);
}

t_stack	*init_stack_b(int argc, char **argv)
{
	t_stack	*lst;
	t_stack	*head;
	int		i;

	(void)argv;
	i = 1;
	head = ft_lstnew_int(0);
	lst = head;
	while (++i < argc)
		ft_lstadd_back_int(&lst, ft_lstnew_int(0));
	return(head);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 08:24:17 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/24 15:55:16 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	lst_has_repeated(t_stack *stacks)
{
	t_lst	*temp;
	t_lst	*temp2;

	temp = stacks->a;
	temp2 = stacks->a->next;
	while (temp->next)
	{
		while (temp2)
		{
			if (ft_cmp(temp->n, temp2->n) == 0)
				return (1);
			temp2 = temp2->next;
		}
		temp = temp->next;
		temp2 = temp->next;
	}
	return (0);
}

void	free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_router.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:37:53 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/01/25 18:12:50 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	sort_2(t_stack *stacks)
{
	if (stacks->a->n > stacks->a->next->n)
		sa(stacks, 0);
}

static void	sort_3(t_stack *stacks)
{	
	int	a;
	int	b;
	int	c;

	a = stacks->a->n;
	b = stacks->a->next->n;
	c = stacks->a->next->next->n;
	if (a < b && a < c && b > c)
	{
		sa(stacks, 0);
		ra(stacks, 0);
	}
	else if (a > b && a < c && b < c)
		sa(stacks, 0);
	else if (a < b && a > c && b > c)
		rra(stacks, 0);
	else if (a > b && a > c && b < c)
		ra(stacks, 0);
	else if (a > b && a > c && b > c)
	{
		sa(stacks, 0);
		rra(stacks, 0);
	}
}
/*
stack<int> sortStack(stack<int> &input)
{
    stack<int> tmpStack;
 
    while (!input.empty())
    {
        // pop out the first element
        int tmp = input.top();
        input.pop();
 
        // while temporary stack is not empty and top
        // of stack is greater than temp
        while (!tmpStack.empty() && tmpStack.top() > tmp)
        {
            // pop from temporary stack and push
            // it to the input stack
            input.push(tmpStack.top());
            tmpStack.pop();
        }
 
        // push temp in temporary of stack
        tmpStack.push(tmp);
    }
 
    return tmpStack;
}
*/
static void	sort_5(t_stack *stacks)
{
	int		min;
	int		index;
	t_lst	*temp;


	temp = ft_lstlast_int(stacks->a);
	index = 0;
	//max = get_min_stack_a(stacks);
	//if (max == stacks->a->n)
	//	ra(stacks, 0);
	while (index < 2)
	{
		min = get_min_stack_a(stacks);
		if ()
		while (stacks->a->n != min)
			ra(stacks, 0);
		pb(stacks);
		index++;
	}
	sort_3(stacks);
	pa(stacks);
	pa(stacks);
}

void	sort(t_stack *stacks)
{
	if (stacks->size_a == 2)
		sort_2(stacks);
	else if (stacks->size_a <= 3)
		sort_3(stacks);
	else if (stacks->size_a <= 5)
		sort_5(stacks);
}

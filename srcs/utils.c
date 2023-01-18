#include "../includes/push_swap.h"

t_lst	*ft_lstnew_int(int nbr)
{
	t_lst	*node;

	node = malloc(sizeof(t_list));
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

void	print_lst(t_lst *stack)
{
	t_lst *head;

	head = stack;
	while (stack)
	{
		ft_printf("%d\n", stack->n);
		stack = stack->next;
	}
	stack = head;
}
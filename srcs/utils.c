
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
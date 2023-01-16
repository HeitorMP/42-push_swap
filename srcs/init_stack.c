
#include "../includes/push_swap.h"

t_stack	*init_stack(int argc, char **argv)
{
	t_stack	*lst;
	t_stack	*head;
	int		i;

	head = ft_lstnew_int(ft_atoi(argv[1]));
	lst = head;
	while (++i < argc)
		ft_lstadd_back_int(&lst, ft_lstnew_int(ft_atoi(argv[i])));
	return(head);
}
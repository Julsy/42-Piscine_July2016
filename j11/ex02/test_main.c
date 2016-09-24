#include <stdio.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data);

void	print_list(t_list *list)
{
	if (list)
	{
		printf("%s\n", (char *)list->data);
		print_list(list->next);
	}
}

int		main(void)
{
	t_list	*list;
	char	*start;

	start = "list 0";
	list = ft_create_elem(start);

	ft_list_push_front(&list, "list 1");
	ft_list_push_front(&list, "list 2");
	ft_list_push_front(&list, "list 3");
	ft_list_push_front(&list, "list 4");
	ft_list_push_front(&list, "list 5");
	ft_list_push_front(&list, "list 6");
	print_list(list);
	return (0);
}

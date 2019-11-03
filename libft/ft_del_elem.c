#include "libft.h"

void		ft_del_elem(t_list *lst, size_t num)
{
	t_list	*tmp;
	t_list	*node;

	if (!lst || !num)
		return ;
	tmp = lst;
	while ((num - 1) > 1)
	{
		tmp = tmp->next;
		num--;
	}
	node = tmp;
	node->next = (node->next)->next;
	tmp = tmp->next;
	free(tmp);
}

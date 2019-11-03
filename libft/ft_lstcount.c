#include "libft.h"

size_t		ft_lstcount(t_list *lst)
{
	t_list	*tmp;
	size_t	i;

	if (!lst)
		return (0);
	i = 0;
	tmp = lst;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

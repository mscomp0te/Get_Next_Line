/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syesseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 21:05:16 by syesseni          #+#    #+#             */
/*   Updated: 2019/09/28 21:05:17 by syesseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** t_list	*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem))
** {
** 	t_list	*tmp;
** 	t_list	*new_list;
** 	t_list	*begin;
**
** 	if (!lst || !f)
** 		return (NULL);
** 	tmp = lst;
** 	if (!(new_list = ft_lstnew(f(tmp)->content, f(tmp)->content_size)))
** 		return (NULL);
**	begin = new_list;
**	tmp = tmp->next;
**	while (tmp)
**	{
**		if (!(new_list->next = ft_lstnew(f(tmp)->content,
**			f(tmp)->content_size)))
**		{
**			ft_del_list(new_list);
**			return (NULL);
**		}
**		tmp = tmp->next;
**		new_list = new_list->next;
**	}
**	return (begin);
** }
*/

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;
	t_list	*begin;

	if (!lst || !f)
		return (NULL);
	if (!(new_list = ft_lstnew(f(lst)->content, f(lst)->content_size)))
		return (NULL);
	begin = new_list;
	lst = lst->next;
	while (lst)
	{
		if (!(new_list->next = ft_lstnew(f(lst)->content,
			f(lst)->content_size)))
		{
			ft_del_list(begin);
			return (NULL);
		}
		lst = lst->next;
		new_list = new_list->next;
	}
	return (begin);
}

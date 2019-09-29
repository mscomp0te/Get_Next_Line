/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syesseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 21:03:52 by syesseni          #+#    #+#             */
/*   Updated: 2019/09/28 21:03:54 by syesseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_del_list(t_list *lst)
{
	t_list	*next;

	if (!lst)
		return ;
	while (lst)
	{
		next = lst->next;
		free(lst);
		lst = next;
	}
	lst = NULL;
}

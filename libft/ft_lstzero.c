/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syesseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 21:05:20 by syesseni          #+#    #+#             */
/*   Updated: 2019/09/28 21:05:21 by syesseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstzero(t_list **alst)
{
	if (!*alst)
		return ;
	while (*alst)
	{
		(*alst)->content = NULL;
		(*alst)->content_size = 0;
		*alst = (*alst)->next;
	}
}

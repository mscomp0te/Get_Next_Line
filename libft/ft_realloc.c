/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syesseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 21:06:06 by syesseni          #+#    #+#             */
/*   Updated: 2019/09/28 21:06:07 by syesseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t org_size, size_t new_size)
{
	void	*ptr_new;

	if (!new_size)
	{
		free(ptr);
		return (NULL);
	}
	else if (!ptr)
		return ((void *)malloc(new_size));
	else if (new_size <= org_size)
		return (ptr);
	else
	{
		if (!(ptr_new = (void *)malloc(new_size)))
			return (NULL);
		ft_memcpy(ptr_new, ptr, org_size);
		free(ptr);
		return (ptr_new);
	}
}

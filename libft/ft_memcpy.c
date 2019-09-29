/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syesseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 21:05:34 by syesseni          #+#    #+#             */
/*   Updated: 2019/09/28 21:05:37 by syesseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;

	i = 0;
	if (!n || dst == src)
		return (dst);
	while (i < n)
	{
		(unsigned char)dst[i] = (unsigned char)src[i];
		i++;
	}
	return (dst);
}

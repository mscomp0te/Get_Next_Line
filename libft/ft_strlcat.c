/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syesseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 21:07:01 by syesseni          #+#    #+#             */
/*   Updated: 2019/09/28 21:07:02 by syesseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	i;

	dst_len = ft_strnlen(dst, size);
	i = dst_len;
	if (dst_len + 1 < dst_len)
		return (dst_len);
	while (src[i - dst_len] && i + 1 < size)
	{
		dst[i] = src[i - dst_len];
		i++;
	}
	if (dst_len < size)
		dst[i] = '\0';
	return (dst_len + ft_strlen(src));
}

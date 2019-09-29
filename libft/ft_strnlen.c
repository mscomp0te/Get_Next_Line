/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syesseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 21:07:20 by syesseni          #+#    #+#             */
/*   Updated: 2019/09/28 21:07:21 by syesseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnlen(char const *s, size_t maxlen)
{
	size_t	i;

	if (!s || !maxlen)
		return (0);
	i = 0;
	while (s[i] && i < maxlen)
		i++;
	return (i);
}

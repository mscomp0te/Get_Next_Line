/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlenc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syesseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 21:07:05 by syesseni          #+#    #+#             */
/*   Updated: 2019/09/28 21:07:06 by syesseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlenc(char const *s, char c)
{
	size_t	len;
	int		i;

	len = 0;
	i = 0;
	while (s[i] == c && s[i])
		i++;
	while (s[len] != c && s[len] && s[len])
	{
		len++;
		i++;
	}
	return (len);
}

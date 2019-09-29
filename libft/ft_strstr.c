/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syesseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 21:07:33 by syesseni          #+#    #+#             */
/*   Updated: 2019/09/28 21:07:34 by syesseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;

	if (!(ft_strlen(needle)))
		return ((char *)haystack);
	i = 0;
	while (haystack[i])
	{
		if (!(ft_strncmp(haystack + i, needle, ft_strlen(needle))))
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}

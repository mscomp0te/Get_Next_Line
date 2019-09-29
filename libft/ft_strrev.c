/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syesseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 21:07:28 by syesseni          #+#    #+#             */
/*   Updated: 2019/09/28 21:07:29 by syesseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(const char *s, size_t len)
{
	char	*res;
	size_t	i;

	if (!s || !len || !(res = (char *)malloc(sizeof(*res) * len)))
		return (NULL);
	i = 0;
	len -= 1;
	while (len)
	{
		res[i] = s[len];
		len--;
	}
	res[i] = '\0';
	return (res);
}

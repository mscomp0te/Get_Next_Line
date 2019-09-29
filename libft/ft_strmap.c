/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syesseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 21:07:07 by syesseni          #+#    #+#             */
/*   Updated: 2019/09/28 21:07:08 by syesseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	int		i;

	i = -1;
	if (!s || !f || ft_strlen(s) + 1 < ft_strlen(s) ||
		!(res = (char *)malloc(ft_strlen(s) + 1)))
		return (NULL);
	while (s[++i])
		res[i] = f(s[i]);
	res[i] = '\0';
	return (res);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syesseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 21:06:50 by syesseni          #+#    #+#             */
/*   Updated: 2019/09/28 21:06:52 by syesseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;

	if (ft_strlen(s1) + 1 < ft_strlen(s1) ||
		!(res = (char *)malloc(ft_strlen(s1) + 1)))
		return (NULL);
	res = ft_strcpy(res, s1);
	res[ft_strlen(s1) + 1] = '\0';
	return (res);
}

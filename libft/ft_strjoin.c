/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syesseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 21:06:59 by syesseni          #+#    #+#             */
/*   Updated: 2019/09/28 21:07:00 by syesseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*res;
	int		i;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if (len + 1 < len
		|| !(res = (char *)malloc(sizeof(*res) * (len + 1))))
		return (NULL);
	i = 0;
	res = ft_strcpy(res, s1);
	res = ft_strcat(res, s2);
	return (res);
}

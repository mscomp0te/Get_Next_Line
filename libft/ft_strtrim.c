/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syesseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 21:07:40 by syesseni          #+#    #+#             */
/*   Updated: 2019/09/28 21:07:41 by syesseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		min;
	int		max;

	if (!s)
		return (NULL);
	min = 0;
	max = ft_strlen(s);
	while (s[min] && (s[min] == ' ' || s[min] == '\n' || s[min] == '\t'))
		min++;
	while (min < max && (s[max - 1] == ' ' || s[max - 1] == '\n'
		|| s[max - 1] == '\t'))
		max--;
	if (max == min)
		return (ft_strnew(1));
	return (ft_strsub(s, min, max - min));
}

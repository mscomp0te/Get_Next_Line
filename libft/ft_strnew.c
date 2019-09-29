/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syesseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 21:07:18 by syesseni          #+#    #+#             */
/*   Updated: 2019/09/28 21:07:19 by syesseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*res;

	if (size + 1 < size || !(res = (char *)malloc(size + 1)))
		return (NULL);
	ft_memset(res, (int)'\0', size);
	res[size] = '\0';
	return (res);
}

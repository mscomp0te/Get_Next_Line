/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_topower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syesseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 21:07:44 by syesseni          #+#    #+#             */
/*   Updated: 2019/09/28 21:07:46 by syesseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_topower(int num, int pow)
{
	double	res;
	int		i;

	if (pow == 0)
		return (-1);
	i = -1;
	res = 1.0;
	if (pow < 0)
	{
		while (++i < pow * (-1))
			res *= (double)num;
		res = 1 / res;
	}
	else
		while (++i < pow)
			res *= (double)num;
	return (res);
}

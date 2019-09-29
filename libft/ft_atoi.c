/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syesseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 21:03:39 by syesseni          #+#    #+#             */
/*   Updated: 2019/09/28 21:03:43 by syesseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_overs(unsigned long long n, int sign)
{
	if (n > MAX_LONG)
	{
		if (sign == -1)
			return (0);
		else
			return (-1);
	}
	return (n * sign);
}

int			ft_atoi(const char *str)
{
	unsigned long long	res;
	int					sign;

	res = 0;
	sign = 1;
	while (*str == '\n' || *str == ' ' || *str == '\f'
				|| *str == '\t' || *str == '\v' || *str == '\r')
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	return (check_overs(res, sign));
}

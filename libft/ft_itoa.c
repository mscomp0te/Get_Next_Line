/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syesseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 21:04:50 by syesseni          #+#    #+#             */
/*   Updated: 2019/09/28 21:04:55 by syesseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** char	*ft_itoa(int n)
** {
**	char	*res;
**	int		sign;
**	int		num;
**	int		i;
**
**	sign = 0;
**	num = ft_digits_num(n);
**	i = num;
**	if (n < 0)
**		sign = 1;
**	if (!(res = (char *)malloc(num + sign) + 1))
**		return (NULL);
**	if (sign)
**	{
**		res[0] = '-';
**		n *= -1;
**		i += 1;
**	}
**	i -= 1;
**	while (i >= sign)
**	{
**		res[i] = (char)((n % 10) + '0');
**		n /= 10;
**		i--;
**	}
**	res[num + sign + 1] = '\0';
**	return (res);
** }
*/

static void	ft_res(char *str, int num, int sign, int count)
{
	while (count >= sign)
	{
		str[count--] = num % 10 + '0';
		num /= 10;
	}
}

char		*ft_itoa(int n)
{
	char	*res;
	int		nums;
	int		i;
	int		isnegative;

	nums = ft_digits_num(n);
	isnegative = 0;
	if (n < 0)
	{
		n *= -1;
		nums++;
		isnegative++;
	}
	if (!(res = (char *)malloc(nums + 1)))
		return (NULL);
	if (n == MIN_INT * (-1))
		return (ft_strcpy(res, "-2147483648"));
	res[nums] = 0;
	if (isnegative)
		res[0] = '-';
	i = nums - 1;
	ft_res(res, n, isnegative, i);
	res[nums] = '\0';
	return (res);
}

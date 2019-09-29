/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_digits_num.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syesseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 21:03:59 by syesseni          #+#    #+#             */
/*   Updated: 2019/09/28 21:04:02 by syesseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_digits_num(int n)
{
	int		k;

	k = 1;
	if (n < 0)
		n *= -1;
	while (n > 9)
	{
		n /= 10;
		k++;
	}
	return (k);
}
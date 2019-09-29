/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_del_twodem_arr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syesseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 21:03:56 by syesseni          #+#    #+#             */
/*   Updated: 2019/09/28 21:03:58 by syesseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_del_twodem_arr(char **arr)
{
	int		j;

	if (!arr)
		return ;
	j = 0;
	while (arr[j])
	{
		free(arr[j]);
		j++;
	}
	free(arr[j]);
	free(arr);
}

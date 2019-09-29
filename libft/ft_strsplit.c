/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syesseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 21:07:30 by syesseni          #+#    #+#             */
/*   Updated: 2019/09/28 21:07:32 by syesseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**arr;
	int		j;
	int		k;

	k = 0;
	j = -1;
	if (!s || !c || !(arr = (char **)malloc(sizeof(char *)
		* (ft_words_num(s, c) + 1))))
		return (NULL);
	while (++j < ft_words_num(s, c))
	{
		while (s[k] == c)
			k++;
		if (!(arr[j] = (char *)malloc(sizeof(char) * ft_strlenc(s + k, c))))
		{
			ft_del_twodem_arr(arr);
			return (NULL);
		}
		arr[j] = ft_strncpy(arr[j], s + k, ft_strlenc(s + k, c));
		arr[j][ft_strlenc(s + k, c)] = '\0';
		while (s[k] && s[k] != c)
			k++;
	}
	arr[j] = NULL;
	return (arr);
}

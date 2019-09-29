/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syesseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/28 21:06:55 by syesseni          #+#    #+#             */
/*   Updated: 2019/09/28 21:06:56 by syesseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striter(char *s, void (*f)(char *))
{
	int		i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(s + i);
		i++;
	}
}
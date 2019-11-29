/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syesseni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 21:03:31 by syesseni          #+#    #+#             */
/*   Updated: 2019/11/27 21:04:42 by syesseni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_lst_gnl				*newlist(const int fd)
{
	t_lst_gnl			*new;

	if (!(new = (t_lst_gnl *)malloc(sizeof(*new))))
		return (NULL);
	new->fd = fd;
	new->rest = ft_strnew(BUFF_SIZE);
	new->next = NULL;
	return (new);
}

char					*check_rest(char **ptr, char **rest)
{
	char				*res;

	if ((*ptr = ft_strchr(*rest, '\n')))
	{
		res = ft_strsub(*rest, 0, *ptr - *rest);
		*rest = ft_strcpy(*rest, ++(*ptr));
	}
	else
	{
		res = ft_strnew(ft_strlen(*rest));
		res = ft_strcat(res, *rest);
		ft_strclr(*rest);
	}
	return (res);
}

int						get_line(const int fd, char **line, char **rest)
{
	char				buf[BUFF_SIZE + 1];
	int					bytes;
	char				*ptr;
	char				*tmp;

	//ptr = check_rest(line, *rest);
	ptr = NULL;
	bytes = 0;
	*line = check_rest(&ptr, rest);
	while (!ptr && (bytes = read(fd, buf, BUFF_SIZE)))
	{
		buf[bytes] = '\0';
		if ((ptr = ft_strchr(buf, '\n')))
		{
			//*rest = ft_strdup(++ptr);
			*rest = ft_strcpy(*rest, ++ptr);
			ft_strclr(--ptr);
		}
		tmp = *line;
		if (!(*line = ft_strjoin(*line, buf)) || bytes < 0)
			return (-1);
		free(tmp);
	}
	return ((bytes || ft_strlen(*line) || ft_strlen(*rest)) ? 1 : 0);
}

int						get_next_line(const int fd, char **line)
{
	static t_lst_gnl	*lst;
	t_lst_gnl			*tmp;

	if (fd < 0 || !line)
		return (-1);
	if (!lst)
		lst = newlist(fd);
	tmp = lst;
	while (tmp->fd != fd)
	{
		if (!(tmp->next))
			tmp->next = newlist(fd);
		tmp = tmp->next;
	}
	//tmp->rest = ft_strnew(1);
	return (get_line(tmp->fd, line, &tmp->rest));
}

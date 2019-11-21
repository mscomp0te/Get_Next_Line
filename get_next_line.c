#include "get_next_line.h"

char				*check_rest(char **line, char *rest)
{
	char				*ptr;

	ptr = NULL;
	if (rest)
	{	
		if ((ptr = ft_strchr(rest, '\n')))
		{
			*ptr = '\0';
			*line = ft_strdup(rest);
			rest = ft_strcpy(rest, ++ptr);
		}
		else
		{
			*line = ft_strdup(rest);
			ft_strclr(rest);
		}
	}
	else
		*line = ft_strnew(1);
	return (ptr);
}

int				get_line(const int fd, char **line, char **rest)
{
	char				buf[BUFF_SIZE + 1];
	int					bytes;
	char				*ptr;
	char				*tmp;

	ptr = check_rest(line, *rest);
	while (!ptr && (bytes = read(fd, buf, BUFF_SIZE)))
	{
		buf[bytes] = '\0';
		if ((ptr = ft_strchr(buf, '\n')))
		{
			*ptr = '\0';
			*rest = ft_strdup(++ptr);
			//ft_strclr(--ptr);
		}
		tmp = *line;
		if (!(*line = ft_strjoin(*line, buf)) || bytes < 0)
			return (-1);
		free(tmp);
	}
	return ((bytes || ft_strlen(*line)) ? 1 : 0);
}

t_lst_gnl		*newlist(const int fd)
{
	t_lst_gnl			*new;

	if (!(new = (t_lst_gnl *)malloc(sizeof(*new))))
		return (NULL);
	new->fd = fd;
	new->rest = NULL;
	new->next = NULL;
	return (new);
}

int						get_next_line(const int fd, char **line)
{
	static t_lst_gnl	*lst;
	t_lst_gnl			*tmp;

	if (fd < 0 || !line || BUFF_SIZE < 1)
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
	return (get_line(tmp->fd, line, &tmp->rest));
}

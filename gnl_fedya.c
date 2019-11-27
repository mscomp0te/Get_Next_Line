#include "get_next_line.h"

char	*check_rest(char *rest, char **line)
{
	char			*pointer_n;

	pointer_n = NULL;
	if (rest)
		if ((pointer_n = ft_strchr(rest, '\n')))
		{
			*pointer_n = '\0';
			*line = ft_strdup(rest);
			ft_strcpy(rest, ++pointer_n);
		}
		else
		{
			*line = ft_strdup(rest);
			ft_strclr(rest);
		}
	else
		*line = ft_strnew(1);
	return (pointer_n);
}

int		get_line(const int fd, char **line, char **rest)
{
	char			buf[BUFF_SIZE + 1];
	int				read_bytes;
	char			*pointer_n;
	char			*temp;

	pointer_n = check_rest(*rest, line);
	while (!pointer_n && (read_bytes = read(fd, buf, BUFF_SIZE)))
	{
		buf[read_bytes] = '\0';
		if ((pointer_n = ft_strchr(buf, '\n')))
		{
			*pointer_n = '\0';
			*rest = ft_strdup(++pointer_n);
		}
		temp = *line;
		if (!(*line = ft_strjoin(*line, buf)) || read_bytes < 0)
			return (GNL_ERROR);
		free(temp);
	}
	return ((read_bytes || ft_strlen(*line))
		? GNL_OK : GNL_FINISH);
}

t_gnl	*new_list(const int fd)
{
	t_gnl			*new;

	new = (t_gnl *)malloc(sizeof(t_gnl));
	new->fd = fd;
	new->rest = NULL;
	new->next = NULL;
	return (new);
}

int		get_next_line(const int fd, char **line)
{
	static t_gnl	*head;
	t_gnl			*temp;

	if (fd < 0 || line == NULL)
		return (GNL_ERROR);
	if (head == NULL)
		head = new_list(fd);
	temp = head;
	while (temp->fd != fd)
	{
		if (temp->next == NULL)
			temp->next = new_list(fd);
		temp = temp->next;
	}
	return (get_line(temp->fd, line, &temp->rest));
}
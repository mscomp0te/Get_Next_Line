#include "get_next_line.h"

/*
**	----------------------------------
**	------ Static array version ------
**	----------------------------------
*/

// int			get_next_line(const int fd, char **line)
// {
// 	char	buf[BUFF_SIZE];
// 	static char	*str;
// 	int		ret;
// 	char	*p_n;

// 	if (fd < 0 || !line || BUFF_SIZE < 1)
// 		return (-1);
// 	if (read(fd, buf, BUFF_SIZE) < 0)
// 		return (0);
// 	while (!p_n && (ret = read(fd, buf, BUFF_SIZE)))
// 	{
// 		buf[ret] = '\0';
// 		if (*p_n = ft_strchr(buf, '\n'))
// 		{
// 			*p_n = '\0';
// 			ft_strcpy(buf, line);
// 			ft_strcpy(++p_n, str);
// 		}
//  	}
// 	while (*buf != '\n')
// 	{
// 		*buf = **line;
// 		buf++;
// 		*line++;
// 	}
// 	free(buf);
// 	return (0);
// }

/*
**	~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
**	~~~~~~ Linked list version ~~~~~~
**	~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

static t_lst_gnl		*ft_newlist(const int fd)
{
	t_lst_gnl			*new;

	if (!(new = (t_lst_gnl *)malloc(sizeof(*new))))
		return (NULL);
	new->fd = fd;
	new->text = ft_strnew(BUFF_SIZE);
	new->next = NULL;
	return (new);
}

static int				get_line(const int fd, char **line, char *text)
{
	char	buf[BUFF_SIZE + 1];
	int		k;

	if (k = read(fd, buf, BUFF_SIZE) < 0)
		return (0);
	while (!)
	buf[k] = '\0';
}

int						get_next_line(const int fd, char **line)
{
	static t_lst_gnl	*lst;
	t_lst_gnl			*tmp;

	if (fd < 0 || !line || BUFF_SIZE < 1)
		return (-1);
	if (!lst)
		lst = ft_newlist(fd);
	tmp = lst;
	while (tmp->fd != fd)
	{
		if (!tmp->next)
			tmp->next = ft_newlist(fd);
		tmp = tmp->next;
	}
	return (get_line(fd, &line, lst->text));
}

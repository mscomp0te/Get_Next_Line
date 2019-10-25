#include "get_next_line.h"

/*
**	----------------------------------
**	------ Static array version ------
**	----------------------------------
*/

int			get_next_line(const int fd, char **line)
{
	char	buf[BUFF_SIZE];
	static char	*str;
	int		ret;
	char	*p_n;

	if (fd < 0 || !line || BUFF_SIZE < 1)
		return (-1);
	if (read(fd, buf, BUFF_SIZE) < 0)
		return (0);
	while (!p_n && (ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		if (*p_n = ft_strchr(buf, '\n'))
		{
			*p_n = '\0';
			ft_strcpy(buf, line);
			ft_strcpy(++p_n, str);
		}
 	}
	while (*buf != '\n')
	{
		*buf = **line;
		buf++;
		*line++;
	}
	free(buf);
	return (0);
}

/*
**	~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
**	~~~~~~ Linked list version ~~~~~~
**	~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/
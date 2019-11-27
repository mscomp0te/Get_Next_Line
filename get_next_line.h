#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"
# include <fcntl.h>

# define	BUFF_SIZE	1

typedef struct			s_lst_gnl
{
	int					fd;
	char				*rest;
	struct s_lst_gnl	*next;
}						t_lst_gnl;

int 					get_next_line(const int fd, char **line);

#endif

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft/libft.h"
# include <fcntl.h>

# define	EOF			(-1)
# define	BUFF_SIZE	1000000000

typedef struct			s_lst_gnl
{
	int					fd;
	char				*text;
	struct s_lst_gnl	*next;
}						t_lst_gnl;

int 					get_next_line(const int fd, char **line);

#endif

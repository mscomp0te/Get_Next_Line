#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	char	*line;
	int		fd;

	fd = open("sample.txt", O_RDONLY);
	get_next_line(fd, &line);
	printf("%s", line);
	return (0);
}

#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	char	*line;

	int fd1 = open("sample.txt", O_RDONLY);
	int fd2 = open("city.txt", O_RDONLY);

	// while (get_next_line(fd, &line))
	// {
	// 	printf("%s\n", line);
	// }

	int count = 0;

	while (get_next_line(fd1, &line) && count < 3)
	{
		printf("%s\n", line);
		count++;
	}
	while (get_next_line(fd2, &line) && count < 6)
	{
		printf("%s\n", line);
		count++;
	}
	while (get_next_line(fd1, &line) && count < 9)
	{
		printf("%s\n", line);
		count++;
	}

	// get_next_line(fd, &line);
	// printf("%s\n", line);
	// get_next_line(fd, &line);
	// printf("%s\n", line);

	close(fd1);
	close(fd2);
	free(line);
	return (0);
}

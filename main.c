#include "get_next_line.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*line;
	int k;
	int fd;

	line = NULL;
	k = 1;
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		while (k)
		{
			k = get_next_line(fd, &line);
			printf("%s   (return value: %d)\n", line, k);
			free(line);
		}
	}

// ====ПРОВЕРКА НА ЧТЕНИЕ ВСЕГО ФАЙЛА SOS====

	// while (get_next_line(fd1, &line))
	// {
	// 	printf("%s\n", line);
	// 	free(line);
	// }

// =====ПРОВЕРКА МУЛЬТИДЕСКРИПТОРА=====

	// int count = 0;

	// while (get_next_line(fd1, &line) && count <= 3)
	// {
	// 	printf("%s\n", line);
	// 	count++;
	// 	free(line);
	// }
	// while (get_next_line(fd2, &line) && count <= 6)
	// {
	// 	printf("%s\n", line);
	// 	count++;
	// 	free(line);
	// }
	// while (get_next_line(fd1, &line) && count <= 9)
	// {
	// 	printf("%s\n", line);
	// 	count++;
	// 	free(line);
	// }
	// while (get_next_line(fd1, &line) && count <= 12)
	// {
	// 	printf("%s\n", line);
	// 	count++;
	// 	free(line);
	// }
	// while (get_next_line(fd2, &line) && count <= 15)
	// {
	// 	printf("%s\n", line);
	// 	count++;
	// 	free(line);
	// }
	// while (get_next_line(fd1, &line) && count <= 18)
	// {
	// 	printf("%s\n", line);
	// 	count++;
	// 	free(line);
	// }
	// while (get_next_line(fd1, &line) && count <= 21)
	// {
	// 	printf("%s\n", line);
	// 	count++;
	// 	free(line);
	// }
	// while (get_next_line(fd1, &line) && count <= 24)
	// {
	// 	printf("%s\n", line);
	// 	count++;
	// 	free(line);
	// }

// =====ПРОВЕРКА НА 2 СТРОКИ =====

	// get_next_line(fd, &line);
	// printf("%s\n", line);
	// get_next_line(fd, &line);
	// printf("%s\n", line);

	//close(fd1);
	//close(fd2);
	//free(line);
	return (0);
}

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int fd;
	int count = 202;
	int max = 203;
	int k = 203;
	if (argc == 2)
	{
		fd = open(argv[1], O_WRONLY);
		while (k)
		{
			while (max - count)
			{
				write(fd, "a", 1);
				count++;
			}
			write(fd, "/n", 1);
			max--;
		}
			//count--;
	}
	printf("%d", count);
	
	close(fd);
	return (0);
}

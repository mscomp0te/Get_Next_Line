#include "libft.h"

char	ft_getchar(void)
{
	char	c;

	return (read(0, &c, 1) == -1) ? EOF : (unsigned char)c;
}

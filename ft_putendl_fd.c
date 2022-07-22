#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	write(ft_strlen(s), &s, fd);
	write(1, '\n', fd);
}
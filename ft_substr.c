#include "libft.h"
#include "stdlib.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	ptr = (char  *)malloc(len);
	if (ptr == (void *)0)
		return ((void *)0);
	ptr = ft_memcpy(ptr, s, len);
	return ((void *)0);
}

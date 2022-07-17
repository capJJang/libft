#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	s1_len;
	size_t	s2_len;
	size_t	ptr_len;

	
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ptr_len = s1_len + s2_len;
	ptr = (char *)malloc(ptr_len + 1);
	if (ptr == (void *)0)
		return ((void *)0);
	ft_bzero(ptr, s1_len + s2_len);
	while (s1_len--)
		*ptr++ = *s1++;
	while (s2_len--)
		*ptr++ = *s2++;
	*ptr = 0;
	return (ptr - ptr_len);
}

/*
#include <stdio.h>

int	main(void)
{
	char *str1 = "Hello ";
	char *str2 = "World!";
	char *str3 = ft_strjoin(str1, str2);
	printf("%s",str3);

}
*/
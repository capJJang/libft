char	*strchr(const char *s, int o)
{
	while (*s)
	{
		if (*s == o)
			return (ss);
		else
			s++;
	}
	return (((void *)0));
}

#include <string.h>
#include <stdio.h>

int	main(void)
{
	char str[] = "BlockDMask \0Blog is good";
	char *ptr = strchr(str, 'o');

	while(ptr != ((void *)0))
	{
		printf("찾는 문자 : %c, 찾은 문자열 : %s\n", *ptr, ptr);
		ptr = strchr(ptr + 1, 'o');
	}
}
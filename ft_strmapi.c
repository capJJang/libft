#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*str;
	
	len = ft_strlen(s);
	str = (char *)malloc(len +1);
	i = 0;
	while (*s)
	{
		str[i] = f(i, *s);
		i++;
		s++;
	}
	retrun (str);
}
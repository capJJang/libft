#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	
	len = ft_strlen(s);
	i = 0;
	while (*s)
	{
		f(i, *s);
		i++;
		s++;
	}
		
}
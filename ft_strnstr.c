/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 17:40:31 by segan             #+#    #+#             */
/*   Updated: 2022/07/15 20:24:55 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && (i < len))
	{
		if (ft_strncmp(haystack, needle, len))
			return ((char *)haystack);
		else
		{
			ft_strncmp(++haystack, needle, len);
			i++;
		}
	}
	return ((void *)0);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
	char	str1[] = "Hello World";
	char	str2[] = "He";

	printf("my func : %s\n", ft_strnstr(str1, str2, 10));
	printf("lib func : %s\n\n", strnstr(str1, str2, 10));

}

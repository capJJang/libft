/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 05:37:09 by segan             #+#    #+#             */
/*   Updated: 2022/07/25 05:37:09 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	if (len > ft_strlen(s) || start > ft_strlen(s))
		return (ft_strdup(""));
	ptr = (char *)ft_calloc(len + 1, 1);
	if (ptr == NULL)
		return (NULL);
	ptr = ft_memcpy(ptr, s + start, len);
	*(ptr + len) = 0;
	return (ptr);
}

/*
#include <stdio.h>

int main(void)
{
	char	*str = "lorem ipsum dolor sit amet";
	char *strsub = ft_substr(str, 400, 20);

	printf("%s", strsub);
}
*/

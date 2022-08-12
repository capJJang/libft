/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:31:24 by segan             #+#    #+#             */
/*   Updated: 2022/07/15 17:05:30 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int o)
{
	if (o == 0)
		return ((char *)s + ft_strlen(s));
	while (*s)
	{
		if (*s == o)
			return ((char *) s);
		else
			s++;
	}
	return ((void *) 0);
}
//문자열의 끝에 널이 있으므로 그 포인터를 반환해야함
//문자열에서 찾지 못한다면 널 포인터를 반환해야함
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char str[] = "bonjour";
	char *ptr = ft_strchr(str, '\0');


	if (str + 7 == ptr)
		printf("right\n");
	
	char str1[] = "";
	char *ptr1 = ft_strchr(str, '\0');


	if (str1 == ptr1)
		printf("right1\n");
}
*/
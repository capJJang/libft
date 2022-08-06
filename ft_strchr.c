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

char	*ft_strchr(const char *s, int o)
{
	while (*s)
	{
		if (*s == o)
			return ((char *) s);
		else
			s++;
	}
	return ((void *)0);
}

/*
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
*/

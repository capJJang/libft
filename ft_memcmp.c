/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:46:10 by segan             #+#    #+#             */
/*   Updated: 2022/07/15 17:32:27 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s1_ptr;
	const unsigned char	*s2_ptr;

	s1_ptr = s1;
	s2_ptr = s2;
	while (*s1_ptr == *s2_ptr && n)
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1_ptr - *s2_ptr);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[] = "this is \0 test";
	char str2[] = "this is \0 test";

	printf("my func : %d\n", ft_memcmp(str1, str2, ft_strlen(str1)));
	printf("my func : %d", memcmp(str1, str2, ft_strlen(str1)));
}
*/

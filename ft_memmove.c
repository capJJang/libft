/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 23:40:45 by segan             #+#    #+#             */
/*   Updated: 2022/07/14 13:52:23 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	temp;
	unsigned char	*src_ptr;
	unsigned char	*dst_ptr;

	src_ptr = (unsigned char *)src;
	dst_ptr = dst;
	while (len--)
	{
		temp = *src_ptr;
		*dst_ptr = temp;
		*src_ptr = temp;
	}
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>

int main(void){
	char str1[] = "Hello world!";
	char str2[30];
	char str3[30];
	ft_memmove(str2, str1, 3);
	printf("my func : %s\n", str2);
	ft_bzero(str2, 30);
	memmove(str3, str1, 3);
	printf("lib func : %s", str3);
}
*/
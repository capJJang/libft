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
		*dst_ptr = *src_ptr;
		*src_ptr = temp;
		src_ptr++;
		dst_ptr++;
	}
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>

int main(void){
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest1;
	char	*dest2;

	dest1 = src + 1;
	dest2 = src + 1;
	
	ft_memmove(dest1, "consecrteutr", 5);
	printf("%s", dest1);
	memmove(dest2, "consecrteutr", 5);
	printf("%s", dest2);
}
*/
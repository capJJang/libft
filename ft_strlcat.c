/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:31:40 by segan             #+#    #+#             */
/*   Updated: 2022/07/15 16:31:46 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	ret;

	ret = ft_strlen(src) + ft_strlen(dst);
	while (*dst)
		dst++;
	while (size-- > 1)
		*dst++ = *src++;
	*dst = 0;
	return (ret);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[30] = "123";
	char	*src = "456789";

	size_t ret = ft_strlcat(dest, src, 7);
	printf("dest : %s \t return = %zu", dest, ret);
}
*/

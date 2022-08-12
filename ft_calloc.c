/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:48:30 by segan             #+#    #+#             */
/*   Updated: 2022/07/15 21:16:26 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(size * count);
	if (ptr)
		ft_bzero(ptr, size);
	return (ptr);
}

/*
#include <stdio.h>

int	main(void)
{
	char *str1 = ft_calloc(30, 1);
	if (!*str1)
		printf("%c test1", *str1);
	else
	{
		printf("1");
	}
	char *str2 = calloc(30, 1);
	if (!*str2)
		printf("%c test2", *str2);
	else
	{
		printf("2");
	}
	printf("%c", *str2);
}
*/
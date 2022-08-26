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
	if (ptr != NULL)
		ft_bzero(ptr, count * size);
	return (ptr);
}

/*
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	main(void)
{
	int size = 8539;

	void * diff1 = ft_calloc(size, sizeof(int));
	void * diff2 = calloc(size, sizeof(int));

	if (memcmp(diff1, diff2, sizeof(int) * size))
		printf("failed");
	free(diff1);
	free(diff2);
}
*/

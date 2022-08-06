/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 18:07:16 by segan             #+#    #+#             */
/*   Updated: 2022/08/06 18:24:21 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	size_t				i;

	ptr = s;
	i = 0;
	while (ptr[i] && n--)
	{
		if (ptr[i] == c)
			return ((void *)&ptr[i]);
		i++;
	}
	return ((void *)0);
}

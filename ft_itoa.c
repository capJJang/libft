/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 05:33:57 by segan             #+#    #+#             */
/*   Updated: 2022/07/25 05:33:57 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	intlen(int n)
{
	size_t	len;

	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = intlen(n);
	str = (char *)malloc(len + 1);
	if (str == (void *) 0)
		return ((void *)0);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		len--;
	}		
	str[len--] = 0;
	while (len >= 0)
	{
		str[len] = n % 10 + '0';
		n /= 10;
		len--;
	}
	return (str);
}

/*
#include <stdio.h>

int main(void)
{
	char *test = ft_itoa(-1012);
	printf("%s", test);
}
*/
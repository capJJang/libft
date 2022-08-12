/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 05:37:04 by segan             #+#    #+#             */
/*   Updated: 2022/07/25 05:37:04 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	cntchr(char const*str, int c)
{
	size_t	cnt;

	cnt = 0;
	while (*str)
	{
		if (*str == c)
			cnt++;
		str++;
	}
	return (cnt);
}

int	checkrepetion(char const *str, int c)
{
	int	i;
	int	j;

	i = 0;
	while (i <= c)
	{
		j = 0;
		while (j < i)
		{
			if (str[j++] == str[i])
				return (0);
		}
		i++;
	}
	return (1);
}

int	isinset(char const *str, int c)
{
	while (*str)
	{
		if (*str == c)
			return (0);
		str++;
	}
	return (1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	set_len;
	size_t	ret_len;
	char	*ret;

	i = 0;
	set_len = ft_strlen(set);
	while (i < set_len)
	{
		if (checkrepetion(set, i) == 1)
			ret_len = cntchr(s1, set[i]);
		i++;
	}
	ret_len = ft_strlen(s1) - ret_len;
	ret = (char *)malloc(ret_len + 1);
	i = 0;
	while (i < ret_len)
	{
		if (isinset(set, *s1) == 1)
			*ret++ = *s1++;
		i++;
	}
	*ret = 0;
	return (ret - ret_len);
}/*
#include <stdio.h>

int	main(void)
{
	char *str = ft_strtrim("Hello World!", "!");
	printf("%s\n", str);
	free(str);
	return (0);
}
*/
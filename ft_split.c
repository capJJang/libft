/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 05:36:42 by segan             #+#    #+#             */
/*   Updated: 2022/07/25 05:36:42 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count_word(char const *s, int c)
{
	size_t	cnt;

	cnt = 0;
	while (*s)
	{
		if (*s != c)
		{
			cnt++;
			while (*s != c && *s != 0)
				s++;
		}
		else
			s++;
	}
	return (cnt);
}

char	**free_all(char **s)
{
	size_t	i;

	i = 0;
	while (s[i])
		free(s[i++]);
	free(s);
	s = NULL;
	return ((void *)0);
}

char	**ft_split(char const *s, char c)
{
	size_t	temp_length;
	size_t	i;
	char	**str;

	str = (char **)malloc(sizeof(char *) * (count_word(s, c) + 1));
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			temp_length = 0;
			while (*s != c && *s != 0)
			{
				temp_length++;
				s++;
			}
			str[i] = ft_substr((s - temp_length), 0, temp_length);
			if (str[i++] == (void *)0)
				return (free_all(str));
		}
		else
			s++;
	}
	str[i] = 0;
	return (str);
}

/*
#include <stdio.h>

int		main()
{
	char	**str;
	int		i;

	i = 0;
	str = ft_split("lorem ipsum", ' ');
	while ( i < 2)
	{
		printf("%s", str[i]);
		i++;
	}
	//free_all(str);
	return (0);
}
*/

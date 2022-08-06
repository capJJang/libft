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

int	total_word_length(char const *s, int c)
{
	size_t	len;

	len = 0;
	while (*s)
	{
		if (*s == c && len == 0)
			continue ;
		else
			len++;
	}
	return (len);
}

char	**free_all(char **s)
{
	size_t	i;

	i = 0;
	while (s[i])
		free(s[i++]);
	free(s);
	return ((void *)0);
}

char	**ft_split(char const *s, char c)
{
	size_t	total_length;
	size_t	temp_length;
	size_t	i;
	char	**str;

	total_length = total_word_length(s, c);
	str = (char **)malloc(total_length);
	if (str == (void *)0)
		return ((void *)0);
	i = 0;
	while (*s)
	{
		temp_length = 0;
		if (*s == c)
			s++;
		while (*(s + 1) != c || *(s + 1) != 0)
			temp_length++;
		str[i] = (char *)malloc(temp_length + 1);
		if (str[i] == (void *)0)
			return (free_all(str));
		ft_strlcpy(str[i++], s, temp_length);
		s += temp_length + 1;
	}
	*str = 0;
	return (str);
}

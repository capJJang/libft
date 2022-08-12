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
		{
			s++;
			continue ;
		}
		else
		{
				len++;
				s++;
		}
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
	size_t	temp_length;
	size_t	i;
	char	**str;

	str = (char **)malloc(total_word_length(s, c));
	i = 0;
	while (*s)
	{
		temp_length = 0;
		while (*s != c && *s != 0)
		{
			temp_length++;
			s++;
		}
		str[i] = (char *)malloc(temp_length + 1);
		if (str[i] == (void *)0)
			return (free_all(str));
		ft_strlcpy(str[i], s - temp_length, temp_length + 1);
		i++;
		if (*s == 0)
			break ;
		s++;
	}
	return (str);
}

/*
#include <unistd.h>

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

#include <stdio.h>

int main(void)
{
	char **tabstr;

	tabstr = ft_split("lorem ipsum", ' ');
	for (int i = 0; i < 2; i++ )
	{
		ft_print_result(tabstr[i]);
		write(1, "\n", 1);
	}
}
*/
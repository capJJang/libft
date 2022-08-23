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

	str = (char **)malloc(count_word(s, c) + 1);
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
			str[i] = (char *)malloc(temp_length + 1);
			if (str[i] == (void *)0)
				return (free_all(str));
			ft_strlcpy(str[i], s - temp_length, temp_length + 1);
			i++;
		}
		else
			s++;
	}
	str[i] = 0;
	return (str);
}

#include <unistd.h>

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}


int		main()
{
	char	**tabstr;
	int		i;

	alarm(5);

	i = 0;
		// if (!(tabstr = ft_split("          ", ' ')))
		// 	ft_print_result("NULL");
		// else
		// {
		// 	while (tabstr[i] != NULL)
		// 	{
		// 		ft_print_result(tabstr[i]);
		// 		write(1, "\n", 1);
		// 		i++;
		// 	}
		// }

		if (!(tabstr = ft_split("lorem ipsum", ' ')))
			ft_print_result("NULL");
		else
		{
			while (tabstr[i] != NULL)
			{
				ft_print_result(tabstr[i]);
				write(1, "\n", 1);
				i++;
			}
		}
	
		// if (!(tabstr = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ')))
		// 	ft_print_result("NULL");
		// else
		// {
		// 	while (tabstr[i] != NULL)
		// 	{
		// 		ft_print_result(tabstr[i]);
		// 		write(1, "\n", 1);
		// 		i++;
		// 	}
		// }

		// if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i')))
		// 	ft_print_result("NULL");
		// else
		// {
		// 	while (tabstr[i] != NULL)
		// 	{
		// 		ft_print_result(tabstr[i]);
		// 		write(1, "\n", 1);
		// 		i++;
		// 	}
		// }

		// if (!(tabstr = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z')))
		// 	ft_print_result("NULL");
		// else
		// {
		// 	while (tabstr[i] != NULL)
		// 	{
		// 		ft_print_result(tabstr[i]);
		// 		write(1, "\n", 1);
		// 		i++;
		// 	}
		// }

	
		// if (!(tabstr = ft_split("", 'z')))
		// 	ft_print_result("NULL");
		// else
		// 	if (!tabstr[0])
		// 		ft_print_result("ok\n");
	return (0);
}

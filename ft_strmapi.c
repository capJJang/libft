/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 05:36:59 by segan             #+#    #+#             */
/*   Updated: 2022/07/25 05:36:59 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	len;
	char			*str;

	len = ft_strlen(s);
	str = (char *)malloc(len +1);
	i = 0;
	while (*s)
	{
		str[i] = f(i, *s);
		i++;
		s++;
	}
	return (str);
}

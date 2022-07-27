/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 05:36:25 by segan             #+#    #+#             */
/*   Updated: 2022/07/25 05:36:25 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	write(ft_strlen(s), &s, fd);
	write(1, "\n", fd);
}

/*
#include <stdio.h>

int main(void)
{
	ft_putendl_fd("Hello", 1);
	printf("TEST");
}
*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: segan <segan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 20:36:10 by segan             #+#    #+#             */
/*   Updated: 2022/07/15 20:45:53 by segan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	atoi(const char *str)
{
	int	sign;
	int	ret;

	sign = 1;
	ret = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str++ == '-')
		sign *= -1;
	while (*str >= '0' && *str <= '9')
	{
		ret = ret * 10 + *str - '0';
		str++;
	}
	return (sign * ret);
}

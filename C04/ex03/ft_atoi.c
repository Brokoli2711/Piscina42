/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:47:46 by elfo              #+#    #+#             */
/*   Updated: 2024/08/21 15:04:02 by egelma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	total;
	int	sign;

	sign = 1;
	total = 0;
	while (*str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
		{
			total = total * 10 + (*str - 48);
		}
		else
			return (total * sign);
		str++;
	}
	return (total * sign);
}

int	main(int argc, char *argcv[])
{
	if (argc == 2)
	{
		printf("%i", ft_atoi(argcv[1]));
	}
	return (0);
}

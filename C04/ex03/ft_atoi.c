/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:47:46 by elfo              #+#    #+#             */
/*   Updated: 2024/08/20 11:25:07 by elfo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	num_len(char *str);
int	power(char *str, int pot);

int	ft_atoi(char *str)
{
	int	total;
	int	len;
	int	sign;

	sign = 1;
	len = num_len(str);
	total = 0;
	while (*str != '\0' && ((*str >= '0' && *str <= '9') \
		|| (*str == '+' || *str == '-')))
	{
		if (*str >= '0' && *str <= '9')
		{
			total += power(str, len);
			len--;
		}
		else if (*str == '-')
			sign *= -1;
		str++;
	}
	return (total * sign);
}

int	num_len(char *str)
{
	int	len;

	len = 0;
	while (*str != '\0' && ((*str >= '0' && *str <= '9') \
		|| (*str == '+' || *str == '-')))
	{
		if (*str >= '0' && *str <= '9')
			len++;
		str++;
	}
	return (len);
}

int	power(char *nb, int pot)
{
	int	total;

	total = *nb - 48;
	while (--pot != 0)
	{
		total *= 10;
	}
	return (total);
}

int	main(int argc, char *argcv[])
{
	if (argc == 2)
	{
		printf("%i", ft_atoi(argcv[1]));
	}
	return (0);
}

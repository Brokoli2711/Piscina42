/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:46:19 by elfo              #+#    #+#             */
/*   Updated: 2024/08/26 13:58:40 by elfo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	total;
	
	i = 1;
	total = nb;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (i < power)
	{
		total *= nb;
		i++;
	}
	return (total);
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%i", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:43:59 by elfo              #+#    #+#             */
/*   Updated: 2024/08/26 13:44:05 by elfo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	total;
	int	i;

	i = 0;
	total = 1;
	if (nb < 0)
		return (0);
	while(i <= nb)
	{
		if (i != 0)
			total *= i;
		i++;	
	}
	return (total);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%i", ft_iterative_factorial(atoi(argv[1])));
	return (0);
}

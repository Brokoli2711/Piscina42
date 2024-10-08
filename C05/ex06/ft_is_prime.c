/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:43:39 by elfo              #+#    #+#             */
/*   Updated: 2024/08/28 12:18:51 by egelma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 1;
	if (nb <= 1)
		return (0);
	while (++i <= nb)
	{
		if ((i != nb) && (nb % i == 0))
			return (0);
	}
	return (1);
}
/*
int	main(int argc, char *argv[])
{
	if(argc == 2)
		printf("%i", ft_is_prime(atoi(argv[1])));
	return (0);
}
*/

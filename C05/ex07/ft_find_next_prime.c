/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egelma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:19:47 by egelma-b          #+#    #+#             */
/*   Updated: 2024/08/28 12:29:22 by egelma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 1;
	if (nb <= 1)
		return (ft_find_next_prime(nb + 1));
	while (++i <= nb)
	{
		if ((nb % i == 0) && i != nb)
			return (ft_find_next_prime(nb + 1));
	}
	return (nb);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%i", ft_find_next_prime(atoi(argv[1])));
	return (0);
}
*/

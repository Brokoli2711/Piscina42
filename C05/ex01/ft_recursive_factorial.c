/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:45:27 by elfo              #+#    #+#             */
/*   Updated: 2024/08/26 13:45:30 by elfo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	total;

	total = 1;
	if (nb < 0)
		return (0);
	else if (nb != 0)
		total = nb * ft_iterative_factorial(nb - 1);
	return (total);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%i", ft_iterative_factorial(atoi(argv[1])));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:29:40 by elfo              #+#    #+#             */
/*   Updated: 2024/08/27 15:38:46 by elfo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt_sequence(int nb, int sqrt)
{
	if(sqrt * sqrt == nb)
		return (sqrt);
	else if (nb / 2 < sqrt)
		return (0);
	return (ft_sqrt_sequence(nb, sqrt + 1));
}

int	ft_sqrt(int nb)
{
	return (ft_sqrt_sequence(nb, 0));
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%i", ft_sqrt(atoi(argv[1])));
	return (0);
}

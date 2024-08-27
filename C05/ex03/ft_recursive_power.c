/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:15:49 by elfo              #+#    #+#             */
/*   Updated: 2024/08/27 15:17:43 by elfo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power > 0)
		return (nb * ft_recursive_power(nb, --power));
	return (0);
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%i", ft_recursive_power(atoi(argv[1]), atoi(argv[2])));
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:43:39 by elfo              #+#    #+#             */
/*   Updated: 2024/08/27 15:54:42 by elfo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime_sequence(int nb, int i)
{
	if(nb % i == 0 && i != nb)
		return (0);
	if (i <= nb)
		
}

int	ft_is_prime(int nb)
{
	if (nb == 0 || nb == 1)
		return (0);
	return (ft_is_prime_sequence(nb, 2));
}

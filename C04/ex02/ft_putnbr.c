/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 10:35:08 by elfo              #+#    #+#             */
/*   Updated: 2024/08/20 10:46:38 by elfo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		n;
	char	c;

	n = 0;
	if (nb != 0)
	{
		n = nb % 10;
		nb = nb / 10;
		c = n + '0';
		ft_putnbr(nb);
	}
	write(1, &c, 1);
}
/*
int	main(void)
{
	int	nb = 521;
	ft_putnbr(nb);
	return (0);
}
*/

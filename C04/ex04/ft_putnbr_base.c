/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybayart <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 10:49:14 by ybayart           #+#    #+#             */
/*   Updated: 2024/08/26 13:01:55 by elfo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_error(char *base, int *error)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		*error = 1;
	while (base[i] && *error == 0)
	{
		j = i;
		while (base[j] != '\0')
		{
			j++;
			if (base[i] == base[j])
				*error = 1;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] == '%'
				|| base[i] == '/' || base[i] == '*' || base[i] == '='
				|| base[i] == ',' || base[i] == '.'
				|| base[i] < 33 || base[i] > 126)
			*error = 1;
		else
			i++;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		lbase;
	int		error;
	long	nb;

	lbase = 0;
	error = 0;
	ft_error(base, &error);
	nb = nbr;
	if (error == 0)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		while (base[lbase])
			lbase++;
		if (nb < lbase)
			ft_putchar(base[nb]);
		if (nb >= lbase)
		{
			ft_putnbr_base(nb / lbase, base);
			ft_putnbr_base(nb % lbase, base);
		}
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
		ft_putnbr_base(atoi(argv[1]), argv[2]);
	return (0);
}

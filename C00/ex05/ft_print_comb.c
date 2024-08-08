/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egelma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:17:27 by egelma-b          #+#    #+#             */
/*   Updated: 2024/08/08 23:47:33 by elfo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;
	char	characters[5];

	i = 0;
	while (i < 10)
	{
		j = i + 1;
		while (j < 10)
		{
			k = j + 1;
			while (k < 10)
			{
				characters[0] = '0' + i;
				characters[1] = '0' + j;
				characters[2] = '0' + k;
				characters[3] = ',';
				characters[4] = ' ';
				if (i != 7)
				{
					write(1, characters, 5);
				}
				else
				{
					write(1, characters, 3);
				}
				k++;
			}
			j++;
		}
		i++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}

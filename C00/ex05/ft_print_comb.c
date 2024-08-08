/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egelma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:17:27 by egelma-b          #+#    #+#             */
/*   Updated: 2024/08/08 17:16:50 by egelma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_comb(void)
{
	char numero[5];
	for(int i = 0; i<10;i++)
	{
		for(int j = i+1; j < 10; j++)
		{
			for(int k = j+1; k < 10; k++)
			{
				numero[0] = '0' + i;
				numero[1] = '0' + j;
				numero[2] = '0' + k;
				if(i != 7)
				{
					numero[3] = ',';
					numero[4] = ' ';
					write(1, numero, 5);
				}
				else
				{
					write(1, numero, 3);
				}
			}
		}
	}
}

int	main(void)
{
	ft_print_comb();
	return(0);
}

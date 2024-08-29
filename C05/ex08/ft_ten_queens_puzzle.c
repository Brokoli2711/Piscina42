/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egelma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:30:51 by egelma-b          #+#    #+#             */
/*   Updated: 2024/08/28 12:38:58 by egelma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ten_queens_puzzle(void)
{
	char	table[10][10];

	table[1][2] = 'x';
	write(1, &table[1][2], 1);
}

int	main(void)
{
	ft_ten_queens_puzzle();
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egelma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 13:56:17 by egelma-b          #+#    #+#             */
/*   Updated: 2024/08/08 14:28:09 by egelma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	number;

	number = 97;
	while (number <= 122)
	{
		write(1, &number, 1);
		number++;
	}
}

/*int	main(void)
{
	ft_print_alphabet();
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egelma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:28:51 by egelma-b          #+#    #+#             */
/*   Updated: 2024/08/08 14:37:01 by egelma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	counter;

	counter = 122;
	while (counter >= 97)
	{
		write(1, &counter, 1);
		counter--;
	}
}

/*int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egelma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:37:24 by egelma-b          #+#    #+#             */
/*   Updated: 2024/08/08 14:38:39 by egelma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	number;

	number = 57;
	while (number <= 57)
	{
		write(1, &number, 1);
		number++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/

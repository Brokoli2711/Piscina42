/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egelma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 14:40:21 by egelma-b          #+#    #+#             */
/*   Updated: 2024/08/08 14:44:24 by egelma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	answer;

	answer = 'P';
	if (n < 0)
	{
		answer = 'N';
	}
	write(1, &answer, 1);
}

/*int	main(void)
{
	ft_is_negative(3);
	ft_is_negative(0);
	ft_is_negative(-3);
	return (0);
}*/

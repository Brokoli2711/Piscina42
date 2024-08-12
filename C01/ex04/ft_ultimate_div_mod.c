/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 19:10:15 by elfo              #+#    #+#             */
/*   Updated: 2024/08/12 20:27:51 by elfo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *a / *b;
	*b = x % *b;
}
/*int	main(void)
{
	int	a;
	int	b;

	a = 4;
	b = 2;

	ft_ultimate_div_mod(&a, &b);
	printf("%d, %d", a, b);
	return (0);
}*/

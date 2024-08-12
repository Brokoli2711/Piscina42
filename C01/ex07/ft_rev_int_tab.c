/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 22:03:49 by elfo              #+#    #+#             */
/*   Updated: 2024/08/12 22:19:33 by elfo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	new_arr[size];

	while (size - 1 >= 0)
	{
		new_arr[size - 1] = *tab;
		size--;
		tab++;
	}
}

int	main(void)
{
	int arr[] = {1,2,3,4,5};
	int size = 0;

	ft_rev_int_tab(arr, 5);

	while(size < 5)
	{
		printf("%d ", arr[size++]);
	}
	printf("\n");
	return (0);
}

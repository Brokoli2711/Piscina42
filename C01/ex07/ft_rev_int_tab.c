/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 22:03:49 by elfo              #+#    #+#             */
/*   Updated: 2024/08/13 12:39:46 by egelma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	half;

	i = 0;
	temp = 0;
	half = size / 2;
	while (half > 0)
	{
		temp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = temp;
		i++;
		size--;
		half--;
	}
}

/*int	main(void)
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
}*/

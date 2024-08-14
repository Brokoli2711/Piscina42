/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egelma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:17:01 by egelma-b          #+#    #+#             */
/*   Updated: 2024/08/13 15:23:36 by elfo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	swap(int *a, int *b);

void	ft_sort_int_tab(int *tab, int size)
{
	int	c1;
	int	c2;
	int	swapped;

	c1 = -1;
	while (++c1 < size - 1)
	{
		swapped = 0;
		c2 = -1;
		while (++c2 < size - c1 - 1)
		{
			if (tab[c2] > tab[c2 + 1])
			{
				swap(&tab[c2], &tab[c2 + 1]);
				swapped = 1;
			}
		}
		if (swapped == 0)
			break ;
	}
}

void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*int	main(void)
{
	int arr[5] = {4,2,6,1,3};

	ft_sort_int_tab(&arr[0], 5);
	int	count = -1;
	while(++count < 5)
	{
		printf("%d ", arr[count]);
	}
	return (0);
}*/

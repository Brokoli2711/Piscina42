/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egelma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:01:48 by egelma-b          #+#    #+#             */
/*   Updated: 2024/08/29 14:28:04 by egelma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	interval;
	int	i;

	interval = -1;
	i = 0;
	if (min >= max)
		return (NULL);
	ptr = (int *)malloc(sizeof(int) * (max - min) + 1);
	while (min < max)
		ptr[i++] = min++;
	ptr[i] = '\0';
	return (ptr);
}

int	main (int argc, char *argv[])
{
	int	*ptr;
	if (argc == 3)
	{
		ptr = ft_range(atoi(argv[1]), atoi(argv[2]));
		while(*ptr)
		{
			printf("%i", *ptr);
			ptr++;
		}		
	}
	return (0);
}

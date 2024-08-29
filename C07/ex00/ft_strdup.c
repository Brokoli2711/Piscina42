/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egelma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:40:58 by egelma-b          #+#    #+#             */
/*   Updated: 2024/08/29 12:00:25 by egelma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	len(char *src)
{
	int	leng;

	leng = 0;
	while (*src)
	{
		leng++;
		src++;
	}
	return (leng);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int	i;

	i = 0;
	ptr = (char *)malloc(sizeof(char) * len(src) + 1);
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%s", ft_strdup(argv[1]));
	return (0);
}

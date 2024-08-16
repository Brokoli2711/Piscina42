/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egelma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:28:08 by egelma-b          #+#    #+#             */
/*   Updated: 2024/08/16 12:44:17 by egelma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2++)
	{
		if (*s1++ == '\0')
			return (0);
	}
	return (*s1 - *(s2-1));
}

int	main(int argc, char *argv[])
{
	if (argc > 3)
		printf("Introduce 2 values, introduced: %d", argc - 1);
	if (argc == 3)
		printf("%d", ft_strcmp(argv[1], argv[2]));

	return (0);
}

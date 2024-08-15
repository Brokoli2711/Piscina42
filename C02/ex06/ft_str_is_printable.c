/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egelma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:46:35 by egelma-b          #+#    #+#             */
/*   Updated: 2024/08/15 14:56:31 by egelma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str)
	{
		if(str[0] == '\0')
			return (1);
		if(str[i] < 32 || str[i] > 126)
			return (0);
		str++;
	}
	return (1);
}

int	main(void)
{
	char *hola = "hola";
	char *notext = "";

	printf("%d", ft_str_is_printable(hola));
	printf("%d", ft_str_is_printable(notext));
	return (0);
}

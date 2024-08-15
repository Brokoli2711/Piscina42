/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 22:59:18 by elfo              #+#    #+#             */
/*   Updated: 2024/08/15 11:43:00 by egelma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str)
	{
		if (str[0] == '\0')
			return (1);
		if (!((str[i] <= 'Z' && str[i] >= 'A') || \
			(str[i] <= 'z' && str[i] >= 'a')))
			return (0);
		str++;
	}
	return (1);
}

/*int	main(void)
{
	char *word = "hola";
	char *empty = "";
	char *noword = "g?>h";

	printf("%d", ft_str_is_alpha(word));
	printf("%d", ft_str_is_alpha(empty));
	printf("%d", ft_str_is_alpha(noword));
	return (0);
}*/

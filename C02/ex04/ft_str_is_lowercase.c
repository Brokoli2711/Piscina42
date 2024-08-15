/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egelma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:55:55 by egelma-b          #+#    #+#             */
/*   Updated: 2024/08/15 14:26:22 by egelma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_str_is_lowercase(char *str)
{
	while (str)
	{
		if(str[0] == '\0')
			return (1);
		if (!((str[0] >= 'a') && (str[0] <= 'z')))
			return (0);
		str++;	
	}
	return (1);
}

int	main(void)
{
	char *minus = "abcd";
	char *mayus = "aBcD";
	char *nothing = "";

	printf("%d", ft_str_is_lowercase(minus)); 
	printf("%d", ft_str_is_lowercase(mayus)); 
	printf("%d", ft_str_is_lowercase(nothing)); 
	return (0);
}

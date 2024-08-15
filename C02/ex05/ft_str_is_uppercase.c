/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egelma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:55:55 by egelma-b          #+#    #+#             */
/*   Updated: 2024/08/15 14:28:38 by egelma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_str_is_uppercase(char *str)
{
	while (str)
	{
		if(str[0] == '\0')
			return (1);
		if (!((str[0] >= 'A') && (str[0] <= 'Z')))
			return (0);
		str++;	
	}
	return (1);
}

int	main(void)
{
	char *mayus = "ABCD";
	char *minus = "aBcD";
	char *nothing = "";

	printf("%d", ft_str_is_uppercase(minus)); 
	printf("%d", ft_str_is_uppercase(mayus)); 
	printf("%d", ft_str_is_uppercase(nothing)); 
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egelma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:55:55 by egelma-b          #+#    #+#             */
/*   Updated: 2024/08/15 13:44:06 by egelma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	while (str)
	{
		if(str[0] == '\0')
			return (1);
		if (!((str[0] >= '0') && (str[0] <= '9')))
			return (0);
		str++;	
	}
	return (1);
}

int	main(void)
{
	char *numeric = "159";
	char *nonumeric = "1a";
	char *nothing = "";

	printf("%d", ft_str_is_numeric(numeric)); 
	printf("%d", ft_str_is_numeric(nonumeric)); 
	printf("%d", ft_str_is_numeric(nothing)); 
	return (0);
}

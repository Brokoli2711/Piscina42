/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egelma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:21:04 by egelma-b          #+#    #+#             */
/*   Updated: 2024/08/28 14:41:17 by egelma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	switch_str(char *str1, char *str2)
{
	
}

int	is_bigger(char *str1, char *str2)
{
	int		i;
	int		bigger;

	i = 0;
	temp = str1;
	bigger = 0;
	while(*str1 != '\0')
	{
		if(str1[i] > str2[i])
			bigger = 1;
	}
	return(bigger);
}

int	main(int argc, char *argv[])
{
	if (argc > 1)
	{

	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egelma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:16:02 by egelma-b          #+#    #+#             */
/*   Updated: 2024/08/15 22:15:50 by elfo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	start_word;

	i = 0;
	start_word = 1;
	while(*str != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || \
				(str[i] >= 'a' && str[i] <= 'z'))
		{
			if ((str[i] >= 'A') && start_word == 1)
				str[i] += 32;
			else
				str[i] -= 32;
			start_word = 0;
		}
	}
}

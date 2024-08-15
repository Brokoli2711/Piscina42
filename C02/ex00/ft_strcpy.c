/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elfo <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 15:35:37 by elfo              #+#    #+#             */
/*   Updated: 2024/08/15 11:31:31 by egelma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char src[5] = {'H', 'o', 'l', 'a', '.'};
	char dest[6] = {'A', 'd', 'i', 'o', 's', '.'};
	int i = -1;

	ft_strcpy(&dest[0], &src[0]);
	while (++i < 6)
	{
		printf("%c", dest[i]);
	}
}*/

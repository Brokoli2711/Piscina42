/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egelma-b <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 12:57:52 by egelma-b          #+#    #+#             */
/*   Updated: 2024/08/16 13:19:25 by egelma-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while (n-- != 0)
	{
		if (*s1 != *s2++)
			return (*s1 - *(s2 - 1));
		else if (*s1++ == '\0')
			break ;
	}
	return (0);
}

/*int	main(void)
{

	printf("%d", ft_strncmp("hola", "holi", 4));
	return (0);
}*/

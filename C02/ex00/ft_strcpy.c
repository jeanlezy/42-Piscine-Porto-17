/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 15:55:34 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/07/25 17:10:28 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*#include <stdio.h>
int main(void)
{
	char	src[] = "Passei na 42";
	char	dest[] = "Sera?";
	
	printf("Before dest: %s\n", dest);
	ft_strcpy(dest, src);
	printf("After dest: %s\n", dest);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 16:06:57 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/07/25 09:14:06 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*#include <stdio.h>
int main(void)
{
	char	dest[] = "Passei"; 
	char	src[] =  "$$$";
	int n = 3;

	printf("Dest before: %s\n", dest);
	ft_strncpy(dest, src, n);
	printf("Dest after: %s\n", dest);
}*/
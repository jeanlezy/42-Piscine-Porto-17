/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 11:30:42 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/08/08 12:00:24 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//It takes 'src' appends to 'dest', avoid overflowing the 'dest' buffer.
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len_dest;
	unsigned int	len_src;

	i = 0;
	len_dest = 0;
	len_src = 0;
	while (dest[len_dest])
		len_dest++;
	while (src[len_src])
		len_src++;
	if (size <= len_dest)
		return (len_src + size);
	while (src[i] && len_dest + i + 1 < size)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	return (len_dest + len_src);
}
/*#include <stdio.h>
int main(void)
{
	char dest[20] = "Passei ";
	unsigned int ret;

	ret = ft_strlcat(dest, "na 42!", 20);
	printf("dest: %s\n", dest);
	printf("ret: %u\n", ret);
	return (0);
}*/
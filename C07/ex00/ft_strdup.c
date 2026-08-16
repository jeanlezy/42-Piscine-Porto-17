/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 08:17:12 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/08/01 10:48:40 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*dest;

	i = 0;
	len = 0;
	while (src[len])
	{
		len++;
	}
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
	{
		return (NULL);
	}
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>
int main(void)
{
	char	src[] = "We're 42";

	printf("Original: %s and Duplicate: %s\n", src, ft_strdup(src));
	return (0);
}

/*int main(int argc, char **argv)
{
	int i;
	char *dup;

	i = 1;
	if (argc < 2)
	{
		printf("\n");
		return (1);
	}
	while(i < argc)
	{
		dup = ft_strdup(argv[i]);

		if(!dup)
			return 1;
		printf("Original: %s and Dup: %s\n", argv[i], dup);

		free(dup);
		i++;
	}
	return (0);
}*/

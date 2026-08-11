/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/25 10:35:09 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/08/08 11:40:23 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*#include <stdio.h>
int main(int argc, char **argv)
{
	if(argc != 3)
	{
		printf("\n");
		return (0);
	}
	printf("%d\n", ft_strcmp(argv[1], argv[2]));
}*/
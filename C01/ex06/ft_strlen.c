/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 23:53:12 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/07/23 00:01:14 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int main(int argc, char **argv)
{
	int len;

	if(argc == 2)
	{
		len = ft_strlen(argv[1]);
		printf("Tamanho: %d\n", len);
	}
}*/

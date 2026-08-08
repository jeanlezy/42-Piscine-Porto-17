/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 11:21:12 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/08/04 08:54:25 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*dest;

	i = 0;
	dest = (char *) malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!dest)
		return (NULL);
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str		*dest;
	int				i;

	i = 0;
	dest = (t_stock_str *) malloc(sizeof(t_stock_str) * (ac + 1));
	if (!dest)
		return (NULL);
	while (i < ac)
	{
		if (av[i] == NULL)
			return (NULL);
		dest[i].size = ft_strlen(av[i]);
		dest[i].str = ft_strdup(av[i]);
		dest[i].copy = ft_strdup(av[i]);
		if (dest[i].str == NULL || dest[i].copy == NULL)
			return (NULL);
		i++;
	}
	dest[i].str = NULL;
	return (dest);
}
/*
void	print(t_stock_str *str)
{
	int	i;

	i = 0;

	while (str[i].str != NULL)
	{
		printf("Index: %d - Size: %d - String: %s - Copy: %s\n",
		i, str[i].size,	str[i].str, str[i].copy);
	       i++;	
	}
	free(str);
}

int	main(int ac, char **av)
{
	print(ft_strs_to_tab(ac, av));
}*/
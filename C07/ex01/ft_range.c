/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 08:46:06 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/08/01 09:50:04 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*res;

	i = 0;
	if (min >= max)
	{
		return (NULL);
	}
	size = max - min;
	res = (int *)malloc(sizeof(int) * size);
	if (!res)
	{
		return (NULL);
	}
	while (i < size)
	{
		res[i] = min;
		i++;
		min++;
	}
	return (res);
}
/*
#include <stdio.h> // main easy
int main(void)
{
	int i = 0;
	int min = 2;
	int max = 8;
	int size = max - min;
	int *range = ft_range(min, max);

	if(!range)
	{
		return (1);
	}
	while(i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
	return (0);
}
#include <stdio.h> // main hard
int  main(int argc, char **argv)
{
	int min;
	int max;
	int *res;
	int i;
	int size;
	
	if(argc != 3)
	{
		printf("\n");
		return (1);
	}
	min = atoi(argv[1]);
	max = atoi(argv[2]);
	res = ft_range(min, max);
	if(!res)
	{
		return (0);
	}
	size = max - min;
	i = 0;
	while(i < size)
	{
		printf("%d\n", res[i]);
		i++;

	}
	free(res);
}*/
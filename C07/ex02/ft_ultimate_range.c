/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 12:48:10 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/07/29 14:32:37 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*res;

	i = 0;
	if (min >= max)
	{
		*range = (NULL);
		return (0);
	}
	size = max - min;
	res = (int *)malloc(sizeof(int) * size);
	if (!res)
	{
		return (-1);
	}
	while (i < size)
	{
		res[i] = min;
		i++;
		min++;
	}
	*range = res;
	return (i);
}
/*#include <stdio.h>
int main(void)
{
	int i = 0;
	int min = 2;
	int max = 8;
	int *range;
	int size = ft_ultimate_range(&range, min, max);
	
	if(!range)
	{
		return 1;
	}
	printf("Range size: %d\n", size);
	while(i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
	return (0);
}*/
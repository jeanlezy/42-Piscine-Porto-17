/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 15:44:30 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/07/27 18:40:19 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index == 0)
	{
		return (0);
	}
	if (index == 1)
	{
		return (1);
	}
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	int i = 0;

	if(argc == 2)
	{
		int limit = atoi(argv[1]);
		
		printf("Sequence: %d\n", limit);
		while(i <= limit)
		{
			printf("Fibonacci(%d) = %d\n", i, ft_fibonacci(i));
			i++;
		}
	}
}*/
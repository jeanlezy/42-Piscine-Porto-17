/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 11:35:30 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/07/27 12:10:10 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	res = 1;
	while (nb < 0)
	{
		return (0);
	}
	while (nb > 0)
	{
		res *= nb;
		nb--;
	}
	return (res);
}
/*#include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	if(argc == 2)
	{
		printf("%d\n",ft_iterative_factorial(atoi(argv[1])));
	}
}*/
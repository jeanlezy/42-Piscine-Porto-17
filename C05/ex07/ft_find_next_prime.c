/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 09:03:28 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/07/28 09:25:17 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (i * i <= nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (ft_prime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}
/*#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int nb = atoi(argv[1]);
		printf("The next prime of %d ? = %d\n", nb, ft_find_next_prime(nb));
	}
}*/
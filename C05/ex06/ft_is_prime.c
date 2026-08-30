/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/28 08:09:42 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/07/28 08:59:00 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
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
/*#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	if(argc == 2)
	{
		int nb = atoi(argv[1]);
		printf("Is prime %d ? = %d\n", nb, ft_is_prime(nb));
	}
}*/
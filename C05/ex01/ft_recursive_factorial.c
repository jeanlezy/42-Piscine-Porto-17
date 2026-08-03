/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/27 12:08:51 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/07/27 12:43:46 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb < 2)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}
/*#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    if (argc == 2)
    {
        printf("%d\n", ft_recursive_factorial(atoi(argv[1])));
    }
    return (0);
}*/
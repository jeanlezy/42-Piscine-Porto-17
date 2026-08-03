/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 23:37:25 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/07/23 13:43:05 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		div;
	int		mod;

	div = (*a / *b);
	mod = (*a % *b);
	*a = div;
	*b = mod;
}
/*#include <stdio.h>
int main(void)
{
	int n1 = 10;
	int n2 = 2;
	int *a = &n1;
	int *b = &n2;

	ft_ultimate_div_mod(a, b);
	
	printf("Div: %d and mod: %d\n", *a, *b);
}*/
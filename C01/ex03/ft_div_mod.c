/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 23:28:00 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/07/23 12:15:39 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*#include <stdio.h>
int main(void)
{
	int n1 = 10;
	int n2 = 2;
	int x1 = 0;
	int x2 = 0;
	int *div = &x1;
	int *mod = &x2;	

	printf("Value n1: %d, n2: %d\n", n1, n2);
	ft_div_mod(n1, n2, div, mod);
	printf("Res div %d, mod: %d\n", *div, *mod);
}*/

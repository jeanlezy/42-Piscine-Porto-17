/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 23:17:45 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/08/08 09:54:03 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int		tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*#include <stdio.h>
int main(void)
{
	int n1 = 42;
	int n2 = 26;
	int *a = &n1;
	int *b = &n2;
	
	ft_swap(a, b);
	printf("New value a: %d, b: %d\n", *a, *b);
}*/
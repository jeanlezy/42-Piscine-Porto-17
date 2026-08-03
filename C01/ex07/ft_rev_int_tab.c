/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 14:55:35 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/07/23 15:37:45 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	size--;
	while (i < size)
	{
		tmp = tab[i];
		tab[i] = tab[size];
		tab[size] = tmp;
		i++;
		size--;
	}
}
/*#include <stdio.h>
int main(void)
{
	int tab[5] = {1, 2, 3, 4, 5};
	int size = 5;
	int i = 0;
	int j = 0;
	
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
	ft_rev_int_tab(tab, size);
	
	while(j < size)
	{
		printf("%d", tab[j]);
		j++;
	}
	printf("\n");
}*/
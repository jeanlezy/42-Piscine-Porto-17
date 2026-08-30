/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 09:40:11 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/08/08 10:17:45 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	pivot;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		pivot = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[pivot])
				pivot = j;
			j++;
		}
		tmp = tab[i];
		tab[i] = tab[pivot];
		tab[pivot] = tmp;
		i++;
	}
}
/*#include <stdio.h>
int main(void)
{
	int tab[5] = {7, 2, 42, 5, 62};
	int i;

	i = 0;
	ft_sort_int_tab(tab, 5);
	while (i < 5)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/
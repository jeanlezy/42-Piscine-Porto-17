/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 13:59:01 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/07/22 14:05:34 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	revlet;

	revlet = 'z';
	while (revlet >= 'a')
	{
		write(1, &revlet, 1);
		revlet--;
	}
}
/*int main(void)
{
	ft_print_reverse_alphabet();
}*/

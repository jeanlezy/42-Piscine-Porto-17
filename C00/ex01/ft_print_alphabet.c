/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 13:12:06 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/07/22 13:56:21 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	let;

	let = 'a';
	while (let <= 'z')
	{
		write(1, &let, 1);
		let++;
	}
}
/*
int main(void)
{
	ft_print_alphabet();
}*/

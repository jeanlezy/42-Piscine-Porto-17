/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 11:07:47 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/08/08 11:27:36 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_print(char c)
{
	return (c >= 32 && c <= 126);
}

void	to_hex(unsigned char c)
{
	char	*hex_char;

	hex_char = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hex_char[c / 16], 1);
	write(1, &hex_char[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_print(str[i]))
			write(1, &str[i], 1);
		else
			to_hex(str[i]);
		i++;
	}
}
/*
int main(void)
{
	char	str[] = "Passei \n na 42";
	ft_putstr_non_printable(str);
}*/
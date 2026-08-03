/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 10:06:05 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/07/27 20:42:03 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;
	int	len;

	len = ft_strlen(base);
	i = 0;
	if (ft_strlen(base) < 2)
	{
		return (0);
	}
	while (base[i])
	{
		if ((base[i] == '+' || base[i] == '-')
			|| (base[i] <= 32 || base[i] >= 127))
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	n;
	long	size_base;

	size_base = check_base(base);
	if (size_base == 0)
		return ;
	n = nbr;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n >= size_base)
	{
		ft_putnbr_base(n / size_base, base);
	}
	write(1, &base[n % size_base], 1);
}
/*
#include <stdlib.h>
int main(int argc, char **argv)
{
	if(argc == 3)
	{
		ft_putnbr_base(atoi(argv[1]), argv[2]);
	}
	return (0);
}*/
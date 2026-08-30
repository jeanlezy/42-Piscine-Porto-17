/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 14:06:13 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/07/22 14:20:48 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}
/*#include <stdlib.h>
int main(int argc, char **argv)
{
	int num;
	
	if(argc == 2)
	{
		num = atoi(argv[1]);
		ft_is_negative(num);
	}
}*/

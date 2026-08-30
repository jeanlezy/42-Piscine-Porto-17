/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 10:05:01 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/08/08 10:58:26 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alphanum(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

char	to_low(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

char	to_upp(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (is_alphanum(str[i]) && (i == 0 || !is_alphanum(str[i - 1])))
			str[i] = to_upp(str[i]);
		else if (is_alphanum(str[i]))
			str[i] = to_low(str[i]);
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int main(int argc, char **argv)
{
	if(argc != 2)
	{
		printf("\n");
		return (0);
	}	
	printf("%s", ft_strcapitalize(argv[1]));
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 17:06:56 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/08/01 09:46:18 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	total_len(int size, char **strs, char *sep)
{
	int	i;
	int	sum_len;

	i = 0;
	sum_len = 0;
	if (size <= 0)
		return (1);
	while (i < size)
	{
		sum_len += ft_strlen(strs[i]);
		i++;
	}
	sum_len += (size - 1) * ft_strlen(sep);
	return (sum_len + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*all_tog;

	if (size <= 0)
	{
		all_tog = malloc(1);
		if (!all_tog)
			return (NULL);
		all_tog[0] = '\0';
		return (all_tog);
	}
	all_tog = (char *)malloc(sizeof(char) * total_len(size, strs, sep));
	if (!all_tog)
		return (NULL);
	all_tog[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(all_tog, strs[i]);
		if (i < size - 1)
			ft_strcat(all_tog, sep);
		i++;
	}
	return (all_tog);
}
/*#include <stdio.h> //main exam
int main(void)
{	
	char	*res;
	
	char *words[] = {"Passei", "na", "42"};
	char *sep = " - ";
	
	res = ft_strjoin(3, words, sep);
	printf("Teste: %s\n", res);
	
	free(res);
}*/
/*int	main(int argc, char **argv)
{
	char	*result;
	char	*sep;
	char	**strs;
	int		size;

	if (argc < 2)
	{
		printf("\n");
		return (1);
	}
	sep = argv[1];
	strs = &argv[2];
	size = argc - 2;

	result = ft_strjoin(size, strs, sep);

	if (result)
	{
		printf("Resultado: [%s]\n", result);
		free(result); 
	}
	return (0);
}*/
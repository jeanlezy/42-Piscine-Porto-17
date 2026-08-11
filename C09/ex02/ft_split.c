/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 09:25:27 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/08/08 09:06:27 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// Character is on charset(sep)?
int	check_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (!check_sep(str[i], charset))
		{
			words++;
			while (str[i] != '\0' && !check_sep(str[i], charset))
				i++;
		}
		else
			i++;
	}
	return (words);
}

char	*extract_word(char *str, int start, int len)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *) malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = str[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		j;
	int		start;
	char	**result;

	i = 0;
	j = 0;
	result = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (!result)
		return (NULL);
	while (str[i])
	{
		if (!check_sep(str[i], charset))
		{
			start = i;
			while (str[i] && !check_sep(str[i], charset))
				i++;
			result[j] = extract_word(str, start, i - start);
			j++;
		}
		else
			i++;
	}
	result[j] = NULL;
	return (result);
}
/*#include <stdio.h>
int main(void)
{
    char **result;
    int i;

	i = 0;
    result = ft_split("a.b,c", ".,");
    if (!result)
        return (1);
   
    while (result[i])
    {
        printf("%s\n", result[i]);
        free(result[i]);
        i++;
    }
    free(result);
    return (0);
}*/
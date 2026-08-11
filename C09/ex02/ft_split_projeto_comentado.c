/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_comentado.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeanbarr <jeanbarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/08 15:03:47 by jeanbarr          #+#    #+#             */
/*   Updated: 2026/08/08 16:06:29 by jeanbarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

// Checa se e separador
int check_sep(char c, char *charset)
{
	int i;

	i = 0;
	while(charset[i])
	{
		if(charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/* 	Conta quantas "palavras" existem em 'str'.
	Uma nova palavra começa quando o caractere atual NÃO é separador
 	E (é a primeira posição da string OU o caractere anterior ERA separador).
	Isso detecta exatamente a transição "separador -> não-separador".*/
int count_words(char *str, char *charset)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while(str[i])
	{
		// !IF NOT SEP (INVERT - IF SEP RETURN: 0 AND NOT RET: 1)
		// || OR WE ARE IN THE FIRST POS -> OR BEFORE CHARAC WAS SEPARATOR
		// IF EVERYTHING TRUE - I AM THE FIRST CHARAC OF A NEW WORD
		if(!check_sep(str[i], charset) && (i == 0 || check_sep(str[i - 1], charset)))
			words++;
		i++;
	}
	return (words);
}

/*	Copia um trecho de 'str' (começando em 'start', com 'len' caracteres)
	para uma nova área de memória alocada. A string original nunca é
	modificada -- criamos uma cópia independente.*/
char *extract_word(char *str, int start, int len)
{
	char	*word;
	int		i;
	
	i = 0;
	word = (char *) malloc(sizeof(char) * (len + 1));
	if(!word)
		return (NULL);
	while(i < len)
	{
		// COPY POS (CHARAC OF ORIGINAL STR STARTING IN START) TO NEW POS OF NEW STR
		word[i] = str[start + i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

/*	Divide 'str' em palavras, usando qualquer caractere de 'charset'
 	como separador. Retorna um array de strings alocado, terminado
 	por NULL (para o chamador saber onde a lista acaba).*/
char **ft_split(char *str, char *charset)
{
	// & ARRAY OF STRS & 
	// i RUNS TRU STR AND j COUNTS WHICH POSITION OF RES WEARE WRITING.
	// START MARCA WHERE A WORD BEGIN
	char	**res;
	int		i;
	int 	j;
	int		start;
	
	i = 0;
	j = 0;
	
	res = (char **) mallo#include <stdio.h>c(sizeof(char *) * (count_words(str, charset) + 1));
	if(!res)
		return (NULL);
	while(str[i])
	{
		// IF THE ACTUAL CHARAC IS NOT A SEP = BEGIN OF NEW WORD
		if(!check_sep(str[i], charset))
		{
			start = i;
			// RUN TROUGH THE WORD UNTIL \0 AND NOT SEP
			while(str[i] && !check_sep(str[i], charset))
				i++;
			//NOW WE NOW WHERE(start) THE WORD START AND FINISH(i)
			// WE CALC HIS SIZE(i - start) AND ADVANCE TO NEXT POS OF ARRAY
			res[j] = extract_word(str, start, i - start);
			j++;
		}
		//IF ACTUAL CHAR IS SEP - i++
		else
			i++;
	}
	res[j] = NULL;
	return (res);
}
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
}
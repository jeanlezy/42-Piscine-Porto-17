#include <stdlib.h>
char	**ft_split(char *str)
{
	int 	i = 0;
	int 	j = 0;
	int 	k;
	char	**res = malloc(sizeof(char *) * 1024);
	
	if(!res)
		return (NULL);
	while(str[i])
	{
		while(str[i] && str[i] <= 32)
			i++;
		if(str[i] > 32)
		{
			k = 0;

			res[j] = malloc(1024);
			if(!res[j])
				return (NULL);
			while(str[i] && str[i] > 32)
				res[j][k++] = str[i++];

			res[j][k] = '\0';
			j++;
		}
	}
	res[j] = NULL;
	return (res);
}

#include <stdio.h>

int main(void)
{
	char	**result;
	int		i;

	//result = ft_split("  hello   world  foo  ");
	//result = ft_split("");                    // string vazia → array só com NULL
	//result = ft_split("   ");                 // só espaços → array só com NULL
	//result = ft_split("single");               // uma palavra só
	result = ft_split("a b\tc\nd");             // espaço, tab e newline juntos
	if (!result)
		return (1);
	i = 0;
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
}
#include <stdlib.h>

char    **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int k;
	char **res = malloc(sizeof(char *) * 1024);
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
				res[j][k++] = str[i++]
			res[j][k] = '\0';
			j++;
		}
	}
	res[j] = NULL;
	return (res);
}
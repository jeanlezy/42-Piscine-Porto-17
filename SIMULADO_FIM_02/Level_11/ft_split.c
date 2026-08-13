#include <stdlib.h>

char    **ft_split(char *str)
{
	int i = 0;
	int j =0;
	char **res = malloc(sizeof(char *) * 1026);
	if(!res)
		return (NULL);
	while(str[i])
	{
		while(str[i] && str[i] <= 32)
			i++;
		if(str[i] > 32)
		{
			int k = 0;

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
	char 	**res;
	int 	i;

	i = 0;
	res = ft_split("Hello     Word 42 PORTO");
	if(!res)
		return (1);
	while(res[i])
	{
		printf("[%s]\n", res[i]);
		free(res[i]);
		i++;
	}
	free(res);
	return (0);
}
#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int i;
	int len;
	char *arr;

	i = 0;
	len = 0;
	while(src[len])
		len++;
	arr = (char *) malloc(sizeof(char) * (len + 1));
	if(!arr)
		return NULL;
	while(i <= len)
	{
		arr[i] = src[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
#include <stdio.h>
int main(void)
{
	char str[] = "Passei na 42";
	printf("Original: %s and Dup: %s\n", str, ft_strdup(str));
}
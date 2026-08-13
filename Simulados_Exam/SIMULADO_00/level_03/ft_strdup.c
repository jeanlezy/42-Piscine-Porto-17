#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int i;
	int len;
	char *dest;

	i = 0;
	len = 0;
	while(src[len])
	{
		len++;
	}
	dest = (char *) malloc(sizeof(char) * (len + 1));
	if(!dest)
	{
		return (NULL);
	}
	while(i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>
int main(void)
{
	char	str[] = "Passei";
	printf("Original: %s, Duplicate: %s\n", str, ft_strdup(str));
}
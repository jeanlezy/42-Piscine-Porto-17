#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int i;
	int len;
	char *dest;

	i = 0;
	len = 0;
	while(str[len])
		len++;
	dest = (char *) malloc(sizeof(char) * (len + 1));
	if(dest == NULL)
		return (NULL);
	while(i < len)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>
int main(void)
{
	char	src[] = "Passei na 42";

	printf("Original: %s and Duplicate: %s\n", src, ft_strdup(src));
	return (0);
}
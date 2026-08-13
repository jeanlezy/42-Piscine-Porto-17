char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(dest[i])
		i++;
	while(src[j])
	{
		dest[i] = src[j];

		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
#include <stdio.h>
int main(void)
{
	char	src[10] = " na 42";
	char	dest[50] = "Passei";

	printf("%s\n", ft_strcat(dest, src));
}
int	ft_strlen(char *str)
{
	if (*str == '\0')
		return (0);
	return (1 + ft_strlen(str + 1));
}
#include <stdio.h>
int main(void)
{
	char str[] = "jean";
	printf("%d\n", ft_strlen(str));
}
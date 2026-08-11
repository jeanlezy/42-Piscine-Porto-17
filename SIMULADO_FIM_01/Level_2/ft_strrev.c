char    *ft_strrev(char *str)
{
	int i;
	int last;
	char tmp;
	
	i = 0;
	while(str[i])
		i++;
	last = i - 1;
	i = 0;
	while(i < last)
	{
		tmp = str[i];
		str[i] = str[last];
		str[last] = tmp;

		i++;
		last--;
	}
	return (str);
}
#include <stdio.h>
int main(void)
{
	char	str[] = "naej";
	printf("%s\n", ft_strrev(str));
}
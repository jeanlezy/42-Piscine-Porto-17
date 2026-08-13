char    *ft_strrev(char *str)
{
	int i = 0;
	int last;
	int tmp;

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
int main(int argc, char **argv)
{
	if(argc == 2)
	{
		printf("%s\n", ft_strrev(argv[1]));
	}
}
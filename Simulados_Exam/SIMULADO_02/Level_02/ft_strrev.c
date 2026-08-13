char    *ft_strrev(char *str)
{
	int i;
	int end;
	int tmp;

	i = 0;
	while(str[i])
		i++;
	end = i - 1;
	i = 0;
	while(i < end)
	{
		tmp = str[i];
		str[i] = str[end];
		str[end] = tmp;
		
		i++;
		end--;
	}
	return (str);
}
#include <stdio.h>
int main(void)
{
	char	str[] = "naej";
	printf("%s", ft_strrev(str));
}
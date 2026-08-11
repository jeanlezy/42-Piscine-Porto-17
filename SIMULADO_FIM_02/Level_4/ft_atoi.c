int	ft_atoi(char *str)
{
	int i = 0;
	int res = 0;
	int sign = 1;

	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign *= -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (sign * res);
}
#include <stdio.h>
int main(void)
{
	printf("%d\n", ft_atoi("42"));
	printf("%d\n", ft_atoi(" +-+-+42"));
	printf("%d\n", ft_atoi("-42"));
	printf("%d\n", ft_atoi("0"));
}
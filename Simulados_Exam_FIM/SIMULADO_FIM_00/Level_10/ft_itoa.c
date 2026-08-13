#include <stdlib.h>
int ft_intlen(int nbr)
{
	int len;

	len = 0;
	if(nbr <= 0)
		len++;
	while(nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}
char    *ft_itoa(int nbr)
{
	char *res;
	int len;
	long n;

	n = nbr;
	len = ft_intlen(nbr);
	res = (char *) malloc(sizeof(char) * (len + 1));
	if(!res)
		return (NULL);
	if(n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	if(n == 0)
		res[len - 1] = '0';
	while(n > 0)
	{
		res[--len] = (n % 10) + '0';
		n = n / 10;
	}
	return (res);
}
#include <stdio.h>
int main(void)
{
	printf("[%s]\n", ft_itoa(42));
	printf("[%s]\n", ft_itoa(-42));
	printf("[%s]\n", ft_itoa(0));
	printf("[%s]\n", ft_itoa(2147483647));
	printf("[%s]\n", ft_itoa(-2147483648));
	return (0);
}
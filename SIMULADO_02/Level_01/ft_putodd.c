#include <unistd.h>
void	ft_put_odd(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		if(i % 2 == 0)
		{
			write(1, &str[i], 1);
		}
		i++;
	}
	write(1, "\n", 1);
}
#include <stdio.h>
int main(int argc, char **argv)
{
	if(argc != 2)
	{
		printf("\n");
		return 0;
	}
	ft_put_odd(argv[1]);
}
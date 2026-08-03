#include <unistd.h>

void	putnbr(int nb)
{
	char c;

	if(nb > 9)
	{
		putnbr(nb / 10);		
	}
	c = nb % 10 + '0';
	write(1, &c, 1);
}
int main(int argc, char **argv)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if(argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while(argv[1][i])
	{
		if(argv[1][i] == 'a')
		{
			count++;
		}
		i++;
	}
	putnbr(count);
	write(1, "\n", 1);
}
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char c;

	if(nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	c = nb % 10 + '0';
	write(1, &c, 1);
}
int main(void)
{
	int i;

	i = 1;
	while(i <= 100)
	{
		if(i % 4 == 0 && i % 7 == 0)
			write(1, "buzzfizz", 8);
		else if(i % 4 == 0)
			write(1, "buzz", 4);
		else if(i % 7 == 0)
			write(1, "fizz", 4);
		else
			ft_putnbr(i);
		write(1, "\n", 1);	
		i++;
	}
}
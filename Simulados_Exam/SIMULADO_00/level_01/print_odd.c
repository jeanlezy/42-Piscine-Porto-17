#include <unistd.h>

void	ft_putnbr(int nb)
{
	char c;

	if(nb > 9)
		ft_putnbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}
int main(void)
{
	int i;
	
	i = 1;
	while(i <= 100)
	{
		if(i % 2 != 0)
		{
			ft_putnbr(i);
			write(1, "\n", 1);
		}
		i++;
	}
}
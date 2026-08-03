#include <unistd.h>
void putnbr(int nb)
{
	char c;

	if(nb > 9)
	{
		putnbr(nb / 10);
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
		if(i % 2 == 0)
		{
			putnbr(i);
			write(1, "\n", 1);
		}
		i++;
	}
}
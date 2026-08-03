#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int end;

	i = 0;
	end = 0;
	if(argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while(argv[1][i])
	{
		i++;
	}
	i--;
	while(i >= end)
	{
		write(1, &argv[1][i], 1);

		i--;
	}
	write(1, "\n", 1);
}
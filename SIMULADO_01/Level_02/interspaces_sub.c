#include <unistd.h>

int	check(char c, char *check)
{
	int i;

	i = 0;
	while(check[i])
	{
		if(check[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
int main(int argc, char **argv)
{
	int i;

	i = 0;
	if(argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while(argv[1][i])
	{
		if(check(argv[1][i], argv[2]))
		{
			write(1, "_", 1);
		}
		else
		{
			write(1, &argv[1][i], 1);
		}
		i++;
	}
}
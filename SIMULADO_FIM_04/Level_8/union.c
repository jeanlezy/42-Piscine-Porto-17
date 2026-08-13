#include <unistd.h>

int check(char c, char *str)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] == c)
			return (1);
		i++;
	}
	return (0);
}
int main(int argc, char **argv)
{
	int i = 0;
	int j;

	if(argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while(argv[1][i])
	{
		j = 0;
		while(j < i && (argv[1][i] != argv[1][j]))
			j++;
		if(j == i)
		{
			write(1, &argv[1][i], 1);
		}
		i++;
	}
	i = 0;
	while(argv[2][i])
	{
		if(!(check(argv[2][i], argv[1])))
		{
			j = 0;
			while(j < i && (argv[2][i] != argv[2][j]))
				j++;
			if(j == i)
				write(1, &argv[2][i], 1);
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
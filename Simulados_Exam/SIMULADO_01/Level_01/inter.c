#include <unistd.h>

int check(char *str, char c)
{
	int i;

	i = 0;
	while(str[i] == c)
	{
		return 1;
		i++;
	}
	return (0);
}
int main(int argc, char **argv)
{	
	int i;
	int j;

	i = 0;
	if(argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while(argv[1][i])
	{
		if(check(argv[2], argv[1][i]))
		{
			j = 0;
			while(j < i && argv[1][j] != argv[1][i])
				j++;
			if(j = i)
				write(1, &argv[1][i], 1);
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
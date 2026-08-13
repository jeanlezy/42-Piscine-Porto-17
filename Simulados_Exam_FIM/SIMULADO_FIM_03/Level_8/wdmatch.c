#include <unistd.h>

void putstr(char *str)
{
	int i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;

	if(argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	while(argv[2][j])
	{
		if(argv[1][i] == argv[2][j])
			i++;
		if(argv[1][i] == '\0')
			break;
		j++;
	}
	if(argv[1][i] == '\0')
	{
		putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}
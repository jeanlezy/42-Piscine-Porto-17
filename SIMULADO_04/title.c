#include <unistd.h>
char	to_upp(char c)
{
	if(c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
char	to_low(char c)
{
	if(c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
int main(int argc, char **argv)
{
	int i;

	i = 0;
	if(argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while(argv[1][i])
	{
		if(argv[1][i] != ' ' && (i == 0 || argv[1][i - 1] == ' '))
			argv[1][i] = to_upp(argv[1][i]);
		else
			argv[1][i] = to_low(argv[1][i]);
		write(1, &argv[1][i], 1);	
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
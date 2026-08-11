#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int pos;

	if(argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while(argv[1][i])
	{
		pos = i + 1;
		if(pos % 3 == 0 && pos % 5 == 0)
			write(1, "5", 1);
		else if(pos % 3 == 0)
			write(1, "5", 1);
		else if(pos % 5 == 0)
			write(1, "3", 1);
		else
			write(1, &argv[1][i], 1);
		i++;
	}
}
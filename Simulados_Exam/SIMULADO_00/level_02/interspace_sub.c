#include <unistd.h>

int 	should_replace(char c, char *check)
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
void	interspaces_sub(char *s1, char *s2)
{
	int i;
	
	i = 0;
	while(s1[i])
	{
		if(should_replace(s1[i], s2))
		{
			write(1, "_", 1);
		}
		else
		{
			write(1, &s1[i], 1);
		}
		i++;
	}
	write(1, "\n", 1);
}

int main(int argc, char **argv)
{
	if(argc != 3)
	{
		write(1, "\n", 1);
		return (0);
	}
	interspaces_sub(argv[1], argv[2]);
	
	return (0);
}
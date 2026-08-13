int occ_a(char *str)
{
	int i = 0;
	int count = 0;
	while(str[i])
	{
		if(str[i] == 'A')
			count++;
		i++;
	}
	return (count);
}
#include <stdio.h>
int main(int argc, char **argv)
{
	if(argc == 2)
	{
		printf("%d\n", occ_a(argv[1]));
	}
}
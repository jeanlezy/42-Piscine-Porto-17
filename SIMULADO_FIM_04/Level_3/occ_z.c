int occ_z(char *str)
{
	int i = 0;
	int count = 0;

	while(str[i])
	{
		if(str[i] == 'Z')
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
		printf("%d\n", occ_z(argv[1]));
	}
}
int    count_alen(char *str)
{
	int i = 0;

	while(str[i])
	{
		if(str[i] == 'a')
			return (i);
		i++;
	}
	return (i);
}
#include <stdio.h>
int main(int argc, char **argv)
{
	if(argc == 2)
	{
		printf("%d\n", count_alen(argv[1]));
	}
}
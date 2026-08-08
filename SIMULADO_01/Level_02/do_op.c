#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if(argc != 4)
	{
		printf("\n");
		return (0);
	}
	while(argv[2][i])
	{
		if(argv[2][0] == '+')
			printf("%d", atoi(argv[1]) + atoi(argv[3]));
		else if(argv[2][0] == '-')
			printf("%d", atoi(argv[1]) - atoi(argv[3]));
		else if(argv[2][0] == '*')
			printf("%d", atoi(argv[1]) * atoi(argv[3]));
		else if(argv[2][0] == '/')
		{
			if(argv[3] != 0)
				printf("%d", atoi(argv[1]) / atoi(argv[3]));
		}
		else if(argv[2][0] == '%')
		{
			if(argv[3] != 0)
				printf("%d", atoi(argv[1]) % atoi(argv[3]));
		}
		i++;
	}
	printf("\n");
	return (0);
}
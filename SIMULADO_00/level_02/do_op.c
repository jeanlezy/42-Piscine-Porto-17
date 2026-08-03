#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int num1;
	int num2;
	int res;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if(argc != 4)
	{
		printf("\n");
		return (0);
	}
	switch(argv[2][0])
	{
		case '+':
			res = num1 + num2;
			break;
		case '-':
			res = num1 - num2;
			break;
		case '*':
			res = num1 * num2;
			break;
		case '/':
			if(num2 != 0)
				res = num1 / num2;
			break;
		case '%':
			if(num2 != 0)
				res = num1 % num2;
			break;
	}
	printf("%d\n", res);
}
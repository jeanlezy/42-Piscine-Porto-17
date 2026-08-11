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
int main(void)
{
	char str[] = "jeAnAn";
	printf("%d\n", occ_a(str));
}
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
int main(void)
{
	char	str[] = "JeanZ";
	printf("%d\n", occ_z(str));
}
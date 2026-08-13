#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int i = 0;
	int len;
	int *res;

	if(start <= end)
		len = end - start + 1;
	else
		len = start - end + 1;
	res = (int *) malloc(sizeof(int) * (len));
	if(!res)
		return (NULL);
	while(i < len)
	{
		res[i] = end;
		end--;
		i++;
	}
	return (res);
}
#include <stdio.h>
int main(void)
{
	int i = 0;
	int *res;

	res = ft_rrange(2, 5);

	while(i < 4)
	{
		printf("%d ", res[i]);
		i++;
	}
	free(res);
}
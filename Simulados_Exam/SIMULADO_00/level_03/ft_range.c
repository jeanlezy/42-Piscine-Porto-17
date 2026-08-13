#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int i;
	int *res;
	int size;

	i = 0;
	if (start <= end)
		size = end - start + 1;
	else
		size = start - end + 1;
	res = (int *) malloc(sizeof(int) * (size));
	if(!res)
		return (NULL);
	if (start <= end)
	{
		while (start <= end)
		{
			res[i] = start;
			i++;
			start++;
		}
	}
	else
	{
		while (start >= end)
		{
			res[i] = start;
			i++;
			start--;
		}
	}
	return (res);
}
#include <stdio.h>
int main(void)
{	
	int i = 0;
	int start = 2;
	int end = 8;
	int *range = ft_range(start, end);
	int size = end - start;

	while(i <= size)
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
}
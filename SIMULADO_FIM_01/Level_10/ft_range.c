#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int i = 0;
	int len;
	int *res;
	if(start <= end)
		len = end - start + 1;
	else
		len = start - end + 1;
	res = (int **) malloc(sizeof(int *) * (len));
	if(!res)
		return (NULL);
	while(i < len)
	{
		if(start <= end)
		{
			res[i] = start;
			start++;
		}
		else
		{
			res[i] = start
			start--;
		}
		i++;
	}
	return (res);
}
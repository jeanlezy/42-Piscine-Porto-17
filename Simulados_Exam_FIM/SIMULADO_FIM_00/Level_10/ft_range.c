#include <stdlib.h>
int     *ft_range(int start, int end)
{
	int *res;
	int i;
	int len;

	i = 0;
	if(start <= end)
		len = end - start + 1;
	else
		len = start - end + 1;
	res = (int *) malloc(sizeof(int) * (len));
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
			res[i] = start;
			start--;
		}
		i++;
	}
	return (res);
}
#include <stdio.h>
int	main(void)
{
	int	*tab;
	int	i;

	tab = ft_range(1, 5);
	i = 0;
	while (i < 5)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	free(tab);
	return (0);
}

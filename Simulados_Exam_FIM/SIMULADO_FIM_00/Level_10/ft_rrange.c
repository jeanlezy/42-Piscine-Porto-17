#include <stdlib.h>

int     *ft_rrange(int start, int end)
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
		res[i] = end;
		end--;
		i++;
	}
	return (res);
}
#include <stdio.h>
int	main(void)
{
	int	*tab;
	int	i;

	tab = ft_rrange(1, 5);
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
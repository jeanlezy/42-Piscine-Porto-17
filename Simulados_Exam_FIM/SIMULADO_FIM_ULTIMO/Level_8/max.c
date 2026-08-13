int		max(int *tab, unsigned int len)
{
	unsigned int i = 0;
	int max;

	if(len == 0 || !tab)
		return (0);
	max = tab[0];
	while(i < len)
	{
		if(tab[i] > max)
		{
			max = tab[0];
		}
		i++;
	}
	return (max);
}

#include <stdio.h>
int main(void)
{
	int res[] = {42, 7, 8, 20, 3};

	printf("%d\n", max(res, 5));
	return (0);
}

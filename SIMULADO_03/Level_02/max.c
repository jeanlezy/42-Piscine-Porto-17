int		max(int* tab, unsigned int len)
{
	unsigned int i;
	int max;
	if(len == 0 || !tab)
		return (0);
	i = 0;
	max = tab[0];
	while(i < len)
	{
		if(tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

#include <stdio.h>
int main(void)
{
	int arr[] = {2, 5, 7, 8, 42};
	printf("%d\n", max(arr, 5));
}
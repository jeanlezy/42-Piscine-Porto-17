int		max(int *tab, unsigned int len)
{
	unsigned int i;
	int max;

	i = 0;
	if(len == 0 || !tab)
		return (0);
	max = tab[0];
	while(i < len)
	{
		if(tab[i] > max)
		{
			max = tab[i];
		}
		i++;
	}
	return (max);
}
#include <stdio.h>
int main(void)
{
	int arr[] = {5, 4, 8, 3, 10};
	int size = 5;

		printf("%d\n", max(arr, size));
}
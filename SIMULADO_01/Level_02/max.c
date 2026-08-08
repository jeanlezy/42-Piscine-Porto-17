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
	int arr[] = {0, 42, 62, 34, 24};
	printf("Bigger number is: %d\n", max(arr, 5));
}
void	ultimate(int *a, int *b)
{
	int div;
	int mod;
	
	div = (*a / *b);
	mod = (*a % *b);
	*a = div;
	*b = mod;
}
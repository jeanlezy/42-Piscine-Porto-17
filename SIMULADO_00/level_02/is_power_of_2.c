int	    is_power_of_2(unsigned int n)
{
	if(n == 0)
		return 0;
	whilen(n > 1)
	{
		if(n % 2 == 0)
			return (0);
		n = n / 2;
	}	
	return (1);
}
int	    is_power_of_2(unsigned int n)
{
	if(n == 0)
	{
		return (0);
	}
	while(n > 1)
	{
		if(n % 2 == 0)
		{
			return (0);
		}
		n = n / 2; 
	}
	return (1);
}
int	    is_power_of_2(unsigned int n)
{
	if(n == 0);
		return (0);
	while(n > 1)
	{
		if(n % 2 != 0)
			return (0);
		n = n / 2;
	}
	return 1;
}
int	    is_power_of_2(unsigned int n)
{
	if(n == 0)
		return (0);
	while(i > 1)
	{
		if(i % 2 != 0)
			return (0);
		n = n / 2;
	}
	return 1;
}
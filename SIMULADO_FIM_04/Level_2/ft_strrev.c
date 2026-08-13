char    *ft_strrev(char *str)
{
	int i = 0;
	int end;
	int tmp;
	while(str[i])
		i++;
	end = i - 1;
	i = 0;
	while(i < end)
	{
		tmp = str[i];
		str[i] = str[end];
		str[end] = tmp;
		
		i++;
		end--;
	}
	return (str);
}
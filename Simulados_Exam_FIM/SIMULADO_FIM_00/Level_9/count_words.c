int count_words(char *str)
{
	int i;
	int word;
	
	i = 0;
	word = 0;
	while(str[i])
	{
		if((str[i] != ' ' && str[i] != '\t') && 
		(i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t'))
		{
			word++;
		}
		i++;
	}
	return (word);
}
#include <stdio.h>
int main(int argc, char **argv)
{
	if(argc == 2)
	{
		printf("%d\n", count_words(argv[1]));
	}
}
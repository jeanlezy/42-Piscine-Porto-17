int	ft_count_words(char *str)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while(str[i])
	{
		// conta uma palavra sempre que o caractere atual não é espaço 
		// E o caractere anterior era um espaço (ou é o índice 0).
		if(str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			words++;
		i++;
	}
	return (words);
}
#include <stdio.h>
int main(int argc, char **argv)
{
	if(argc == 2)
	{
		printf("%d", ft_count_words(argv[1]));
		return (0);
	}
}
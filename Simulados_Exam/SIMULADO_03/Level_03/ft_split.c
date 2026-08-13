#include <stdlib.h>

int	is_space(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}
int	count_words(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while(str[i])
	{
		// PULA TODOS OS ESPACOS ENQUANTO TIVER CHARAC
		while(str[i] && is_space(str[i]))
			i++;
		// CHECA SE AINDA TEM CHARAC E NAO E ESPACO = SE SIM, INICIO DE PALAVRA
		if(str[i] && !is_space(str[i]))
		{	//SOMA UMA PALAVRA
			count++;
			//ENQUANTO NAO FOR ESPACO ANDA A PALAVRA ATE ENCONTRAR PROXIMO ESPACO
			while(str[i] && !is_space(str[i]))
				i++;
		}
	}
	return (count);
}
char	*malloc_word(char *str)
{
	char	*word;
	int	i;

	i = 0;
	// DESCOBRE TAMANHO DA PALAVRA
	while(str[i] && !is_space(str[i]))
		i++;
	//ALOCA O TAMANHO DA PALAVRA
	word = (char *) malloc(sizeof(char) * (i + 1));
	if(!word)
		return (NULL);
	// COPIA CHARAC POR CHARAC DE STR[i] PARA WORD[i]
	i = 0;
	while (str[i] && !is_space(str[i]))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}
char    **ft_split(char *str)
{
	char **arr;
	int i; //PERCORRE STRING (str)
	int j; //CONTA QUAL POSICAO DE arr ESTAMOS ESCREVENDO, (so avanca quando encontra palavra comple)

	i = 0;
	j = 0;
	
	arr = (char **) malloc(sizeof(char *) * (count_words(str) + 1));
	if(!arr)
		return (NULL);
	while(str[i])
	{
		//PERCORRE STRING TOPA PULANDO ESPACOS
		while(str[i] && is_space(str[i]))
			i++;
		// SE DEPOIS DE PULAR ESPACOS, TIVER CHARAC E ELE NAO FOR ESPACO, INICIO DE PALAVRA
		if(str[i] && !is_space(str[i]))
		{
			// PASSA END ATUAL DA POS = PRIMEIRO CARAC DA PALAVRA
			arr[j] = malloc_word(&str[i]);
			j++; //AVANCA PRA PROXIMA PALAVRA
			while(str[i] && !is_space(str[i])) //ATRAVESSA PALAVRA TODA
				i++;
		}
	}
	// MARCA COMO FIM DA LISTA DE PALAVRAS 
	arr[j] = NULL;
	return (arr);
}
/*
 #include <stdio.h>

int main(void)
{
 	char **arr;

 	char *phrase = "   Passei,   na\t 42!  ";
 	arr = ft_split(phrase);
 	printf("%s\n", arr[0]);
 	printf("%s\n", arr[1]);
 	printf("%s\n", arr[2]);
}*/
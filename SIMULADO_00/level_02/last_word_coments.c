#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	int end;

	i = 0;
	if(argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	// TESTE COM: "FOR PONY" 
	while(argv[1][i]) // VAI ATE O FIM - '\0'
	{
		i++;
	}
	i--; // RECUA 1 PRA SAIR DO '\0'
	// WHILE QUE RECUA LIMPANDO VAZIOS OUUUUUU TABS
	while(i >= 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
	{
		i--;
	}
	end = i; //GUARDA POSICAO DO 'Y'
	// WHILE QUE ANDA NA PALAVRA ATEEEEEEEEEE CHEGAR ESPACO
	while(i >= 0 && (argv[1][i] != ' ' && argv[1][i] != '\t'))
	{
		i--;
	}
	i++; //AVANCA UM POIS PAROU NO ESPACO = POSICAO 'P'
	while(i <= end)
	{
		write(1, &argv[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
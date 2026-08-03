#include <stdio.h>
#include <string.h>

int soma_array(int *arr, int n) 
{
    int soma = 0;
    int i = 0;
    while (i <= n) 
	{ 
        soma += arr[i];
        i++;
    }
    return soma;
}

void processa(char *nome) 
{
    char buffer[8];
    strcpy(buffer, nome);   // outro bug em potencial
    printf("Processando: %s\n", buffer);
}

int main() 
{
    int numeros[5] = {10, 20, 30, 40, 50};
    int total = soma_array(numeros, 5);
    printf("Total: %d\n", total);

    processa("Fulano");
    return 0;
}
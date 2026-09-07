#include <stdlib.h>

/* int ft_double(int nb)
{
    return (nb * nb);
} */
int *ft_map(int *tab, int length, int (*f)(int))
{
    int i;
    int *result = malloc(sizeof(int) * length);
    if(!result)
        return (NULL);

    i = 0;
    while(i < length)
    {
        // 'result' receive the value of each position
        result[i] = (*f)(tab[i]);

        i++;
    }
    return (result);
}
/* #include <stdio.h>
int main(void)
{
    int i = 0;
    int tab[] = {2, 4, 6, 8, 10};
    int length = 5;
    int *result;

    result = ft_map(tab, length, &ft_double);
    while(i < length)
    {
        printf("%d\n", result[i]);
        i++;
    }
} */
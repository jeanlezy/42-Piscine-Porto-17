int ft_intcmp(int nb1, int nb2)
{
    return (nb1 - nb2);
}
int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
    int i;

    i = 0;
    while(i < length - 1)
    {
        if(f(tab[i], tab[i + 1]) > 0)
        {
            return (0);
        }
        i++;
    }
    return (1);
}
/* #include <stdio.h>
int main(void)
{
    int tab1[] = {1, 2, 3, 4, 5};
    int tab2[] = {7, 2, 4, 5, 1};

    int res1 = ft_is_sort(tab1, 5, &ft_intcmp);
    int res2 = ft_is_sort(tab2, 5, &ft_intcmp);

    printf("tab1: %d\n", res1);
    printf("tab2: %d\n", res2);

    return (0);
} */
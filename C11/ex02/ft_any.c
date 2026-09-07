/* int ft_check(char *str)
{
    int i = 0;

    while(str[i])
    {
        if(str[i] == '4')
            return (1);
        i++;
    }
    return (0);
} */

int ft_any(char **tab, int(*f)(char *))
{
    int i;

    i = 0;
    while(tab[i])
    {
        if(f(tab[i]))
            return (1);
        i++;
    }
    return (0);
}

/* #include <stdio.h>
int main(void)
{
    char *tab[] = {"abc", "pass62", "42thebest", NULL};
    int result;

    result = ft_any(tab, &ft_check);
    printf("%d\n", result);
} */
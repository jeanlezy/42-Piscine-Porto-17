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

int ft_count_if(char **tab, int length, int(*f)(char *))
{
    int i;
    int count;

    i = 0;
    count = 0;
    while(i < length)
    {
        if(f(tab[i]))
            count++;
        i++;
    }
    return (count);
}

/* #include <stdio.h>
int main(void)
{
    char *tab[] = {"abc", "pass62", "42thebest"};
    int result;

    result = ft_count_if(tab, 3, &ft_check);
    printf("%d\n", result);

    return (0);
} */
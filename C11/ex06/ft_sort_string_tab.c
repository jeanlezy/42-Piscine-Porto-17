int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while(s1[i] == s2[i] && s1[i])
        i++;
    return (s1[i] - s2[i]);
}
void    ft_sort_string_tab(char **tab)
{
    int i;
    int j;  
    char *tmp;

    i = 0;
    while(tab[i])
    {
        j = 0;
        while(tab[j])
        {
            if(ft_strcmp(tab[i], tab[j]) < 0)
            {
                tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;
            }
            j++;
        }
        i++;
    }
}
/* #include <stdio.h>
int main(int argc, char **argv)
{
    int i = 1;

    ft_sort_string_tab(argv + 1);
    while(i < argc)
    {
        printf("%s\n", argv[i]);
        i++;
    }
} */
/*#include <unistd.h>

void    ft_putnbr(int nb)
{
    char c;

    if(nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return;
    }
    if(nb < 0)
    {
        write(1, "-", 1);
        nb *= -1;
    }
    if(nb <= 9)
    {
        c = nb + '0';
        write(1, &c, 1);
    }
    else
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}*/
void    ft_foreach(int *tab, int length, void(*f)(int))
{
    int i = 0;

    while (i < length)
    {
        f(tab[i]);
        i++; 
    }
}
/*
int main(void)
{
    int tab[] = {4, 2, 6, 2, 7};

    ft_foreach(tab, 5, &ft_putnbr);
}*/
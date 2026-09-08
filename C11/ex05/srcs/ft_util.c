#include "do-op.h"

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
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
}
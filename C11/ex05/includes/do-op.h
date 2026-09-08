#ifndef DO_OP_H
# define DO_OP_H

#include <unistd.h>

// ft_math functions
int     ft_add(int nb1, int nb2);
int     ft_sub(int nb1, int nb2);
int     ft_mul(int nb1, int nb2);
int     ft_div(int nb1, int nb2);
int     ft_mod(int nb1, int nb2);

// ft_util functions
int     ft_strlen(char *str);
void    ft_putstr(char *str);
void    ft_putchar(char c);
void    ft_putnbr(int nb);

int     ft_atoi(char *str);

#endif
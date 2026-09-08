#include "do-op.h"

int main(int argc, char **argv)
{
    // 5 valid operators, in **operators order
    char operator[5] = {'+', '-', '*', '/', '%'}; 
    int (*operators[5])(int, int );
    int i;
    int operator_index; // -1 = not found yet; otherwise holds index of matching operator in ope[]
    int nb1;
    int nb2;
    int res;

    if(argc != 4)
    {
        return (0);
    }
    // Connect each operator charac to corresponding function
    operators[0] = &ft_add;
    operators[1] = &ft_sub;
    operators[2] = &ft_mul;
    operators[3] = &ft_div;
    operators[4] = &ft_mod;

    nb1 = ft_atoi(argv[1]);
    nb2 = ft_atoi(argv[3]);

    i = 0;
    operator_index = -1;
    while (i < 5)
    {
        // Make sure is one charac
        if(argv[2][1] == '\0' && argv[2][0] == operator[i])
        {
            operator_index = i;
            break;
        }
        i++;
    }
    // No matching operator
    if(operator_index == -1)
    {
        ft_putnbr(0);
        ft_putchar('\n');
        return (0);
    }
    if(argv[2][0] == '/' && nb2 == 0)
    {
        ft_putstr("Stop : division by zero\n");
        return (0);
    }
    if(argv[2][0] == '%' && nb2 == 0)
    {
        ft_putstr("Stop : modulo by zero\n");
        return (0);
    }
    res = operators[operator_index](nb1, nb2);
    ft_putnbr(res);
    ft_putchar('\n');
}
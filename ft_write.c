#include "ft_printf.h"

void    ft_putchar(char c, int *pn)
{
    *pn += 1;
    write(1, &c, 1);
}

void    ft_print_char(va_list ar, int *pn)
{
    char c;

    c = va_arg(ar, int);
    write(1, &c, 1);
    *pn += 1;
}

void ft_print_str(char *str, int *pn)
{
    int i;

    i = 0;
    while (str[i])
    {
        *pn += 1;
        write(1, &str[i], 1);
        i++;
    }
}
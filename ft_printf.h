#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdbool.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
void	ft_print_ptr_adress(size_t x, int *pn);
void	ft_print_str(char *str, int *pn);
void    ft_putchar(char c, int *pn);
void    ft_print_char(va_list ar, int *pn);
void	ft_print_unsigned(unsigned x, int *pn);
void	ft_print_hex(int n, int *pn, char type);
void    ft_print_decimal_number(va_list args, int *pn);

#endif

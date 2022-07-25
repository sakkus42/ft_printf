#include "ft_printf.h"

void	ft_print_hex(int n, int *pn, char type)
{
	if (n > 15)
	{
		ft_print_hex(n / 16, pn, type);
		ft_print_hex(n % 16, pn, type);
	}
	if (n < 16)
	{
		if (n > 9 && type == 'X')
			ft_putchar(n - 10 + 'A', pn);
		if (n > 9 && type == 'x')
			ft_putchar(n - 10 + 'a', pn);
		if (n < 10)
			ft_putchar(n + '0', pn);
	}

}

#include "ft_printf.h"

static void		ft_putunsnbr(unsigned x, int *pn)
{
	if (x > 10)
	{
		ft_putunsnbr(x / 10, pn);
		ft_putunsnbr(x % 10, pn);
	}
	else
		ft_putchar(x + '0', pn);
}

void	ft_print_unsigned(unsigned x, int *pn)
{
	ft_putunsnbr(x, pn);
}

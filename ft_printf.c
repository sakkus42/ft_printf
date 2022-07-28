#include "ft_printf.h"

static void	ft_percent_flags(va_list args, const char type, int *pn)
{
	if (type == 'c')
		ft_print_char(args, pn);
	if (type == 's')
		ft_print_str(va_arg(args, char *), pn);
	if (type == '%')
		ft_putchar('%', pn);
	if (type == 'd' || type == 'i')
		ft_print_decimal_number(args, pn);
	if (type == 'p')
		ft_print_ptr_adress(va_arg(args, size_t), pn);
	if (type == 'u')
		ft_print_unsigned(va_arg(args, unsigned), pn);
	if (type == 'x' || type == 'X')
		ft_print_hex(va_arg(args, int), pn, type);
	else
		return;
}	 

int ft_printf(const char *str, ...)
{
	va_list args;
	int	 i;
	int	 print_number;

	print_number = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ft_percent_flags(args, str[i], &print_number);
			i++;
		}
		if (!str[i])
			return (print_number);
		if (str[i] != '%')
			ft_putchar(str[i++], &print_number);


	}
	return (print_number);
}

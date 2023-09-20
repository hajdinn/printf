#include "main.h"
/**
 * _printf - a custom made printf function
 * @format: argument expecting variadic arguments
 * Return: count of printed characters
 */
int _printf(const char *format, ...);
int _printf(const char *format, ...)
{
	va_list djlist2;
	unsigned int j = 0, _printflen = 0;

	va_start(djlist2, format);
	if (!format)
		return (-1);
	while (format[j])
	{
		if (format[j] == '%')
		{
			j++;
			switch (format[j])
			{
				case 's':
					_printflen = print_string(va_arg(djlist2, char *));
					break;
				case 'c':
					_printflen = djput(va_arg(djlist2, int));
					break;
				case '%':
					_printflen = djput(format[j]);
					break;
				case 'd':
					_printflen = print_dec_number(va_arg(djlist2, int));
					break;
				case 'i':
					_printflen = print_int_number(va_arg(djlist2, int));
					break;
				case 'b':
					_printflen = print_binary_number(va_arg(djlist2, unsigned int));
					break;
				case 'o':
					_printflen = print_octal_number(va_arg(djlist2, unsigned int));
					break;
				case 'X':
					_printflen = print_Xhex_number(va_arg(djlist2, unsigned int));
					break;
				case 'x':
					_printflen = print_hex_number(va_arg(djlist2, unsigned int));
					break;
				case 'u':
					_printflen = print_unint_number(va_arg(djlist2, unsigned int));
					break;
				case 'p':
					_printflen = print_addr_number(va_arg(djlist2, void *));
					break;
				case 'r':
					_printflen = djput(format[j - 1]);
					_printflen = djput(format[j]);
					break;
				case 'S':
					_printflen = print_ascii_number(va_arg(djlist2, char *));
					break;
				case 'R':
					_printflen = _printf_Rot13(va_arg(djlist2, char *));
					break;
			}
		}
		else
		{
			_printflen += djput(format[j]);
		}
		j++;
	}
	return (_printflen);
	va_end(djlist2);
}

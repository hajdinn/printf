#include "main.h"
/**
 * _printf - a custom made printf function
 * @format: argument expecting variadic arguments
 *  Return: count of printed characters
 */

int _printf(const char *format, ...)
{
	dj_structure style[] = {
		{"%s", print_string}, {"%c", print_char},
		{"%%", print_percent},
		{"%i", print_int_number}, {"%d", print_dec_number},
		{"%r", print_reverse_string},
		{"%R", _printf_Rot13}, {"%b", print_binary_number},
		{"%u", print_unint_number},
		{"%o", print_octal_number}, {"%x", print_hex_number},
		{"%X", print_Xhex_number},
		{"%S", print_ascii_number}, {"%p", print_addr_number}
	};

	va_list djlist2;
	int j = 0, i, _printflen = 0;

	va_start(djlist2, format);
	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[j])
	{
		i = 13;
		while (i >= 0)
		{
			if (style[i].id[0] == format[j] && style[i].id[1] == format[j + 1])
			{
				_printflen += style[i].f(djlist2);
				j = j + 2;
				goto Here;
			}
			i--;
		}
		djput(format[j]);
		_printflen++;
		j++;
	}
	va_end(djlist2);
	return (_printflen);
}

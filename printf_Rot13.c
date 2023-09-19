#include "main.h"

/**
 * _printf_Rot13 - the printf called function
 * @str: string passed from va_arg(list, char*)
 * Return: count of printed characters
 */

int _printf_Rot13(char *str)
{
	unsigned int num_len = 0;

	if (str)
	{
		num_len += print_string(rot13(str));
	}
	return (num_len);
}

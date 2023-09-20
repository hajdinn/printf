#include "main.h"

/**
 * print_char - prints a char.
 * @djlist2: arguments.
 * Return: 1.
 */
int print_char(va_list djlist2)
{
	char s;

	s = va_arg(djlist2, int);
	djput(s);
	return (1);
}

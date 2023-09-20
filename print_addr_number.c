#include "main.h"

/**
 * print_addr_number - the address converter
 * @djlist2: parameter passsed
 * Return: count of printed character
 */

int print_addr_number(va_list djlist2)
{
	void *ptr;
	char *str = "(nil)";
	long int addr;
	int len;
	int i;

ptr = va_arg(djlist2, void*);
	if (ptr == NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			djput(str[i]);
		}
		return (i);
	}

	addr = (unsigned long int)ptr;
	djput('0');
	djput('x');
	len = print_hex_number_help(addr);
	return (len + 2);
}

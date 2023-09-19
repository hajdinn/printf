#include "main.h"

/**
 * print_addr_number - the address converter
 * @ptr: parameter passsed
 * Return: count of printed character
 */

int print_addr_number(void *ptr)
{
	unsigned int num_len = 0;

	num_len += printf("%p\n", ptr);

	return (num_len);
}

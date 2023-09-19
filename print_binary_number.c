#include "main.h"

/**
 * print_binary_number - a function that converts
 * unsigned ints to binary
 * @num: parameter passed from va_arg(list, int)
 * Return: count of binary outputs
 */

int print_binary_number(unsigned int num)
{
	unsigned int num_len = 0;

	if (num == 0 || num == 1)
	{
		num_len += djput(num + '0');
	}
	if (num > 1)
	{
		print_binary_number(num / 2);

		num_len += djput(num % 2 + '0');
	}
	return (num_len);
}

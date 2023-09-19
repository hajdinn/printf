#include "main.h"

/**
 * print_unint_number - a function that prints unsigned int
 * @num: paramater from va-arg(list, unsigned int)
 * Return: count of output
 */

int print_unint_number(unsigned int num)
{
	unsigned int num_len = 0;

	if (num <= 9)
	{
		num_len += djput(num + '0');
	}

	if (num > 9)
	{
		print_int_number(num / 10);

		num_len += djput(num % 10 + '0');
	}
	return (num_len);
}

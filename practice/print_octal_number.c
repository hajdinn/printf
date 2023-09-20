#include "main.h"

/**
 * print_octal_number - prints octal numbers
 * @num: parameter passed
 * Return: octal number
 */

int print_octal_number(unsigned int num)
{
	unsigned int num_len = 0;

	if (num <= 7)
	{
		num_len += djput(num + '0');
	}
	if (num > 7)
	{
		print_octal_number(num / 8);

		num_len += djput(num % 8 + '0');
	}
	return (num_len);
}

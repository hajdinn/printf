#include "main.h"

/**
 * print_binary_number - a function that converts
 * unsigned ints to binary
 * @djlist2: parameter passed from va_arg(list, int)
 * Return: count of binary outputs
 */
int print_binary_number(va_list djlist2)
{
	int flag = 0;
	int len = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(djlist2, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & num);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			djput(b + 48);
			len++;
		}
	}
	if (len == 0)
	{
		len++;
		djput('0');
	}
	return (len);
}

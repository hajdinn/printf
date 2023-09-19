#include "main.h"

/**
 * print_hex_number - prints lowercase hex
 * @num: parameter  passed
 * Return: lowercase hex unsigned int
 */
int print_hex_number(unsigned int num)
{
	unsigned int x, num_len = 0;

	if (num > 9)
	{
		print_hex_number(num / 16);
		x = (num % 16);
		if (x > 9)
		{
			switch (x)
			{
				case 10:
					num_len += djput('a');
					break;
				case 11:
					num_len += djput('b');
					break;
				case 12:
					num_len += djput('c');
					break;
				case 13:
					num_len += djput('d');
					break;
				case 14:
					num_len += djput('e');
					break;
				case 15:
					num_len += djput('f');
					break;
			}
		}
		else
		{
			num_len += djput(x + '0');
		}
	}
	else
	{
		num_len += djput(num + '0');
	}
	return (num_len);
}

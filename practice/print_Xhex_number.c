#include "main.h"
/**
 * print_Xhex_number - prints uppercase hex numbers
 * @num: parameter passed
 * Return: uppercase hex
 */
int print_Xhex_number(unsigned int num)
{
	unsigned int x, num_len = 0;

	if (num > 9)
	{
		print_Xhex_number(num / 16);
		x = (num % 16);
		if (x > 9)
		{
			switch (x)
			{
				case 10:
					num_len += djput('A');
					break;
				case 11:
					num_len += djput('B');
					break;
				case 12:
					num_len += djput('C');
					break;
				case 13:
					num_len += djput('D');
					break;
				case 14:
					num_len += djput('E');
					break;
				case 15:
					num_len += djput('F');
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

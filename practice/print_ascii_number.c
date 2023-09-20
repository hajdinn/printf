#include "main.h"

/**
 * print_ascii_number - a function that print unprintable
 * ascii characters by replacing it with '\x'
 * @str: parameter passed from va_arg(list, char*)
 * Return: count of printed character
 */

int print_ascii_number(char *str)
{
	unsigned int num_len = 0;
	int k;

	if (str)
	{
		k = 0;
		while (str[k])
		{
			if ((str[k] >= 0 && str[k] < 32) || str[k] >= 127)
			{
				num_len += djput('\\');
				num_len += djput('x');
				num_len += print_Xhex_number(str[k]);
			}
			else
			{
				num_len += djput(str[k]);
			}
			k++;
		}
	}
	else
	{
		str = "(null)";
	}
	return (num_len);
}


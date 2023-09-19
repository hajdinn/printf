#include "main.h"

/**
 * print_dec_number - prints decimal int
 * @num: parameter
 * Return: appropriate function
 */
int print_dec_number(int num);
int print_dec_number(int num)
{
	int num_chars, num_len = 0;
	char *oct_hex;

	num_chars = snprintf(NULL, 0, "%d", num);
	if (num_chars < 0)
	{
		return (-1);
	}
	oct_hex = malloc((num_chars) + 1);
	if (oct_hex != NULL)
	{
		sprintf(oct_hex, "%d", num);
	}
	else
	{
		free(oct_hex);
		return (-1);
	}
	if (oct_hex[0] == '0' && oct_hex[1] == 'X')
	{
		num_len += print_Xhex_number(num);
		free(oct_hex);
	}
	else if (oct_hex[0] == '0' && oct_hex[1] == 'x')
	{
		num_len += print_hex_number(num);
		free(oct_hex);
	}
	else if (oct_hex[0] == '0')
	{
		num_len += print_octal_number(num);
		free(oct_hex);
	}
	else
	{
		num_len += print_int_number(num);
		free(oct_hex);
	}
	return (num_len);
}

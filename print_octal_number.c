#include "main.h"

/**
 * print_octal_number - prints octal numbers
 * @djlist2: parameter passed
 * Return: octal number
 */
int print_octal_number(va_list djlist2)
{
	int i;
	int *my_array;
	int len = 0;
	unsigned int num = va_arg(djlist2, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		len++;
	}
	len++;
	my_array = malloc(len * sizeof(int));

	for (i = 0; i < len; i++)
	{
		my_array[i] = temp % 8;
		temp /= 8;
	}
	for (i = len - 1; i >= 0; i--)
	{
		djput(my_array[i] + '0');
	}
	free(my_array);
	return (len);
}

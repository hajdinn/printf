#include "main.h"

/**
 * print_hex_number - prints lowercase hex
 * @djlist2: parameter  passed
 * Return: lowercase hex unsigned int
 */
int print_hex_number(va_list djlist2)
{
	int i;
	int *my_array;
	int _printflen = 0;
	unsigned int num = va_arg(djlist2, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		_printflen++;
	}
	_printflen++;
	my_array = malloc(_printflen * sizeof(int));

	for (i = 0; i < _printflen; i++)
	{
		my_array[i] = temp % 16;
		temp /= 16;
	}
	for (i = _printflen - 1; i >= 0; i--)
	{
		if (my_array[i] > 9)
			my_array[i] = my_array[i] + 39;
		djput(my_array[i] + '0');
	}
	free(my_array);
	return (_printflen);
}

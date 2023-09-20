#include "main.h"

/**
 * print_hex_number - prints lowercase hex
 * @num: parameter  passed
 * Return: lowercase hex unsigned int
 */
int print_hex_number_help(unsigned long int num)
{
	long int i;
	long int *array;
	long int counter = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(long int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		djput(array[i] + '0');
	}
	free(array);
	return (counter);
}

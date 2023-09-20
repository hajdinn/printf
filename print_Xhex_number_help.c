#include "main.h"
/**
 * print_Xhex_number_help - prints uppercase hex numbers
 * @num: parameter passed
 * Return: uppercase hex
 */
int print_Xhex_number_help(unsigned int num)
{
	int i;
	int *array;
	int counter = 0;
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = counter - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 7;
		djput(array[i] + '0');
	}
	free(array);
	return (counter);
}

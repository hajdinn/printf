#include "main.h"

/**
 * print_string - a function that prints strings
 * @str: argument  passed from va_arg(list, char*)
 * Return: count of printed characters
 */

int print_string(char *str)
{
	int k;
	int N = 0;

	if (!str)
	{
		str = "(null)";
		return (-1);
	}
	k = 0;
	while (str[k])
	{
		N += djput(str[k]);
		k++;
	}
	return (N);
}

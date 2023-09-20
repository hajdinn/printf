#include "main.h"

/**
 * print_reverse_string - the function prints a string in reverse
 * @djlist2: string passed from va_arg(list, char*)
 * Return: count of printed characters
 */
int print_reverse_string(va_list djlist2)
{

	char *s = va_arg(djlist2, char*);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		djput(s[i]);
	return (j);
}

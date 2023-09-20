#include "main.h"

/**
 * print_ascii_number - a function that print unprintable
 * ascii characters by replacing it with '\x'
 * @djlist2: parameter passed from va_arg(djlist2, char*)
 * Return: count of printed character
 */

int print_ascii_number(va_list djlist2)
{
	char *s;
	int i, len = 0;
	int cast;

	s = va_arg(djlist2, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			djput('\\');
			djput('x');
			len = len + 2;
			cast = s[i];
			if (cast < 16)
			{
				djput('0');
				len++;
			}
			len += print_Xhex_number_help(cast);
		}
		else
		{
			djput(s[i]);
			len++;
		}
	}
	return (len);
}

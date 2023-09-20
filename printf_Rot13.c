#include "main.h"

/**
 * _printf_Rot13 - the printf called function
 * @djlist2: string passed from va_arg(list, char*)
 * Return: count of printed characters
 */

int _printf_Rot13(va_list djlist2)
{
	int i, j, len = 0;
	int k = 0;
	char *s = va_arg(djlist2, char*);
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char rot[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; alpha[j] && !k; j++)
		{
			if (s[i] == alpha[j])
			{
				djput(rot[j]);
				len++;
				k = 1;
			}
		}
		if (!k)
		{
			djput(s[i]);
			len++;
		}
	}
	return (len);
}

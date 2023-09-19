#include "main.h"

/**
 * rot13 - a custom rot 13 encryption function
 * @s: parameter passed
 * Return: encrypted string
 */

char *rot13(char *s)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j])
			{
				*(s + i) = *(rot + j);
				break;
			}
		}
	}
	return (s);
}

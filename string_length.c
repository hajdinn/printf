#include "main.h"
/**
 * _strlen - string_length.
 * @s: pointer parameter
 * Return: count.
 */

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);

}

/**
 * _strlenc - function for char pointer s Strlen
 * @s: pointer parameter
 * Return: c
 */
int _strlenc(const char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
		;
	return (c);
}

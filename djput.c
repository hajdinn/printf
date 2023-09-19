#include "main.h"

/**
 * djput - custom putchar function
 * @c: parameter passed
 * Return: write call system
 */

int djput(char c)
{
	return (write(1, &c, 1));

}

#ifndef	MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

/**
 * struct format - Deb/John struct for printf specifiers
 * @id: type char pointer of the specifier
 * i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} dj_structure;

int print_addr_number(va_list djlist2);
int printf_hex_aux(unsigned long int num);
int printf_HEX_aux(unsigned int num);
int print_ascii_number(va_list djlist2);
int print_Xhex_number(va_list djlist2);
int print_hex_number(va_list djlist2);
int print_octal_number(va_list djlist2);
int print_unint_number(va_list djlist2);
int print_binary_number(va_list djlist2);
int print_reverse_string(va_list djlist2);
int _printf_Rot13(va_list djlist2);
int print_int_number(va_list djlist2);
int print_dec_number(va_list djlist2);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int _strlenc(const char *s);
int print_percent(void);
int print_char(va_list djlist2);
int print_string(va_list djlist2);
int djput(char c);
int _printf(const char *format, ...);
int print_Xhex_number_help(unsigned int num);
int print_hex_number_help(unsigned long int num);

#endif

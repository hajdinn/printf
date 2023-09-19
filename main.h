#ifndef	MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int djput(char c);
int _printf(const char *format, ...);
int print_string(char *str);
int print_int_number(int num);
int print_binary_number(unsigned int num);
int print_octal_number(unsigned int num);
int print_Xhex_number(unsigned int num);
int print_hex_number(unsigned int num);
int print_dec_number(int num);
int print_unint_number(unsigned int num);
int print_addr_number(void *ptr);
int print_ascii_number(char *str);
int _printf_Rot13(char *str);
char *rot13(char *s);

#endif

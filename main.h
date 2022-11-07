#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct fmt - struct for array of specifiers
 *
 * @spec: specifier character
 * @f: pointer to associated function
 *
 * Description: struct for specifiers and function
 */

typedef struct fmt
{
	char *spec;
	int (*f)(va_list);
} fmt_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_sc(va_list c);
int print_ss(va_list s);
int print_sdi(va_list di);

#endif

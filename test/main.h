#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * main - Header file for Holberton partner project
 * where we write our own printf function
 */

/* PROTOTYPES */
int _printf(const char *format, ...);
int minprintf(char *fmt, ...);

/* struct for our project */

typedef struct placeholder
{
    char *ap;
    int (*f)(va_list);
} placeholder_type;

#endif

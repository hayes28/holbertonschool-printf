#include "main.h"                                            
/**
 * print_sc - prints the character 'c' to stdout
 * @c: the character to print
 *
 * Return: 1 for success, otherwise -1 for error
 */
int print_sc(va_list c)
{
    unsigned int count = 0;

    if (!c)
        return(0);

    _putchar((char)va_arg(c, int));
        count++;

    return(count);
}

/**
 * print_ss - prints the character 's' to stdout
 * @s: the string to print
 *
 * Return: 1 for success, otherwise -1 for error
 */
int print_ss(va_list s)
{
    unsigned int len;
    char *str = "(null)";
   for (len = 0; str[len]; len++)
    {
        _putchar (str[len]);
    }

    return (len);
}

/**
 * print_sdi - prints the integer 'di' to stdout
 * @di: the integer to print
 *
 * Return: length count on success, otherwise -1 error
 */
int print_sdi(va_list di)
{
    char *p;
    int size;

    p = itoa(va_arg(di, int), 10);

    size = print((p != NULL) ? p : "NULL");

    return (size);

}

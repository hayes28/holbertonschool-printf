#include "main.h"

/**
 * get_print_func - takes format and returns a pointer
 * @format: format passsed from struct
 *
 * Return: function pointer
 */

int (*get_print_func(const char *format))(va_list)
{
	unsigned int i;
	fmt_t  fmt[] = {
		{"c", print_sc},
		{"s", print_ss},
		{"d", print_sdi},
		{"i", print_sdi},
		{NULL, NULL}
	};

	for (i = 0; fmt[i].spec != NULL; i++)
	{
		if (*(fmt[i].spec) == *format)
		{
			break;
		}
	}
	return (fmt[i].f);
}

/**
 * _printf - recreated printf
 * @format: data type specifier be printed
 *
 * Return: character count printed to standard output
 */

int _printf(const char *format, ...)
{
	unsigned int i, count = 0;
	va_list ap;
	int (*func)(va_list);

	if (format == NULL)
		return (-1);

	va_start(ap, format);
	i = 0;
	while (format[i])
	{
		for (i = i; format[i] != '%' && format[i]; i++)
		{
			_putchar(format[i]);
			count++;
		}
		if (!format[i])
			return (count);
		func = get_print_func(&format[i + 1]);
		if (func != NULL)
		{
			count += func(ap);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		_putchar(format[i]);
		count++;

		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}

	va_end(ap);
	return (count);
}

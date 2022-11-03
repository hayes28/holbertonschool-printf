#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
	{
		return (0);
	}
	_putchar((char)va_arg(c, int));
	count++;

	return (count);
}

/**
 * print_ss - prints the character 's' to stdout
 * @s: the string to print
 *
 * Return: 1 for success, otherwise -1 for error
 */
int print_ss(va_list s)
{
	int len;
	char *str = va_arg(s, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	for (len = 0; str[len]; len++)
	{
		_putchar(str[len]);
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
	int len = 0, i = 0;
	int v = va_arg(di, int), divider = 1;
	char intmin[11] = {"-2147483648"};

	if (v == INT_MIN)
	{
		for (i = 0; i <= 10; i++)
		{
			_putchar(intmin[i]);
			len++;
		}
		return (len);
	}
	if (v < 0)
	{
		_putchar('_');
		v = -v;
		len++;
	}

		while ((v / divider) >= 10)
		{
			divider *= 10;
		}

		while (divider >= 1)
		{
			_putchar((v / divider + '0'));
			v = v % divider;
			divider /= 10;
			len++;
		}

		return (len);
}
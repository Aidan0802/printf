#include "main.h"

/**
 * _printf - prints format
 *
 * @format: format characters
 *
 */

int _printf(const char *format, ...)
{
	int i, j, n, count = 0;
	char *str;
	va_list args;

	if (format == NULL || format[0] == '%')
		return (-1);
	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
				_putchar(va_arg(args, int)), count++;
			else if (format[i + 1] == 's')
			{
				str = va_arg(args, char *);
				for (j = 0; str[j]; j++)
					_putchar(str[j]), count++;
			}
			else if (format[i + 1] == 'i' || format[i + 1] == 'd')
			{
				n = va_arg(args, int);
				print_num(n);
				i++; continue;
			}
		}
		_putchar(format[i]), count++;
	}
	return (count);
}
/**
 * _putchar - prints a single character
 *
 * @c: character to be printed
 *
 * Return: 0 on success, 1 otherwise
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}

/**
 * print_num - prints a number
 *
 * @n: number input
 *
 * Return: void
 */

void print_num(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_num(n / 10);
	_putchar(n % 10 + '0');
}

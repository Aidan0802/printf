#include "main.h"

/**
 * _printf - prints output according to format
 *
 * @format: format that is printed out
 *
 * Return: The number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int i, j, count = 0;
	char *str;
	va_list args;

	if (!format)
		return (-1);

	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				_putchar(va_arg(args, int));
			}

			else if (format[i] == 's')
			{
				str = va_arg(args, char *);
				for (j = 0; str[j]; j++)
				{
					_putchar(str[j]);
					count++;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(args);
	return (count);
}

/**
 * _putchar - prints a single char
 *
 * @c: char input
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}

#include "main.h"
/**
 * _printf - prints format
 *
 * @format: format characters
 *
 * Return: number of char printed
 * otherwise -1
 */

int _printf(const char *format, ...)
{
	int i, res, count = 0;
	int (*speci)(va_list);
	va_list args;

	if (format == NULL)
		return (-1);
	if (format[0] == '%' && format[1] == ' ')
		return (-1);

	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			speci = get_spes(format, i + 1);
			if (speci)
			{
				i += 2;
				res = speci(args);
				count += res;
			}
		}
		_putchar(format[i]), count++;
	}
	va_end(args);
	return (count);
}

/**
 * _perc - prints percentage
 *
 * Return: number of char printed
 */

int _perc(va_list args)
{
	char c = va_arg(args, int);

	if (c == '\0')
		return (0);
	_putchar('%');
	return (1);
}

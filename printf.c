#include "main.h"
/**
 * _printf - prints format
 *
 * @format: format characters
 * @...: multiple variables
 *
 * Return: number of char printed
 * otherwise -1
 */

int _printf(const char *format, ...)
{
	int i, res, count = 0, perc_count = 0;
	int (*speci)(va_list);
	va_list args;

	if (format == NULL)
		return (-1);
	if ((format[0] == '%' && format[1] == ' '))
		return (-1);

	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			perc_count++;
			if (format[i + 1] == '\0')
			{
				if (perc_count == 1)
					return (-1);
			}
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

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
	int i, j, n, count = 0;
	char *str;
	va_list args;

	if (format == NULL || format[0] == '%')
		return (-1);
	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]), count++;
		else
		{
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(args, int)), count++, i++;
				continue;
			}
			else if (format[i + 1] == 's')
			{
				str = va_arg(args, char *);
				for (j = 0; str[j]; j++)
				{
					_putchar(str[j]), count++;
					i += 2;
					continue;
				}
			}
			else if (format[i + 1] == 'i' || format[i + 1] == 'd')
			{
				n = va_arg(args, int);
				print_num(n);
				i++;
				continue;
			}
			else if (format[i + 1] == '%')
				continue;
		}
	}
	va_end(args);
	return (count);
}

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
	int i, d, j, n, count = 0, m;
	unsigned int x;
	char *str;
	va_list args;

	if (!format || format[0] == '%')
		return (-1);
	if (!format[0])
		return (0);
	va_start(args, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
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
			else if (format[i + 1] == 'u')
			{
				m = va_arg(args, unsigned int);
				x = (unsigned int)m;
				_putchar(x), i += 2;
			}
			else if (format[i + 1] == 'p')
			{
				d = va_arg(args, int);
				write(1, &d, 4);
			}
		}
		_putchar(format[i]), count++;
	}
	va_end(args);
	return (count);
}

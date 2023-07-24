#include "main.h"
/**
 * _printf - prints format
 *
 * @format: format characters
 *
 * Return: number of char printed
 * otherwise -1
 */
int (*get_spes(const char *, int))(va_list);
int _str(va_list);
int _c(va_list);
int _perc();

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

struct sp
{
	char *choice;
	int (*f)(va_list args);
};

typedef struct sp select;

/**
 * get_spes - checks if spesifier exist
 *
 * @arg_list: va_list of arguments
 * @format: specifier
 *
 * Return: returns number char printed
 * otherise -1
 */

int (*get_spes(const char *format, int index))( va_list args)
{
	int i;

	select ops[] = {
		{"s", _str},
		{"c", _c},
		{"%", _perc},
		{NULL, NULL},
	};

	i = 0;

	while (ops[i].choice != NULL)
	{
		if (ops[i].choice[0] == format[index])
			return (ops[i].f);
		i++;
	}
	return NULL;
}

int _str(va_list args)
{
	int i, count = 0;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
		count++;
	}
	return (count);
}

int _c(va_list args)
{
	char c = va_arg(args, int);

	if (c == '\0')
		return (-1);
	_putchar(c);
	return (1);
}

int _perc()
{
	_putchar('%');
	return (1);
}

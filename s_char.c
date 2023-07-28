#include "main.h"

/**
 * s_char - print special char
 *
 * @args: argument list
 *
 * Return: Amount of char printed
 */

int s_char(va_list args)
{
	char *str = va_arg(args, char *);
	int count = -1, i, x;
	char *special = "\\xA0";

	for (i = 0; str[i]; i++)
	{
		if (str[i] == '\n')
			for (x = 0; special[x]; x++)
				_putchar(special[x]), count++;
		else
			_putchar(str[i]), count++;
	}
	if (count == -1)
		return (-1);
	return (count);
}

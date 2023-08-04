#include "main.h"

/**
 * un_bin - prints binary numbers
 *
 * @args: va_list arguments
 *
 * Return: amount characters printed
 */

int un_bin(va_list args)
{
	unsigned long int num = va_arg(args, unsigned int);
	unsigned long int count = 0;

	count += print_bin(num);

	return (count);
}

/**
 * print_bin - prints binary in reverse
 *
 * @n: number input
 * Return: Amount printed
 */

int print_bin(unsigned long int n)
{
	int count = 0;

	if (n > 0)
	{
		if (n > 1)
			count += 1 + print_bin(n >> 1);
		_putchar(48 + (n & 1));
	}
	else
		_putchar('0');

	return (count);
}

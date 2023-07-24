#include "main.h"

/**
 * print_num - prints a number
 *
 * @n: number input
 *
 * Return: number printed
 */

int int_print(int n)
{
	count = 0;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_num(n / 10);
	_putchar(n % 10 + '0');
	count++;
	return (count);
}

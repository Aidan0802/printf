#include "main.h"

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

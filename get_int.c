#include "main.h"

/**
 * get_int - prints integers
 *
 * @n: integer input
 *
 * Return: count printed
 */

int get_int(int n)
{
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		get_int(n / 10);
	_putchar(n % 10 + '0');
	count++;
	return (count);
}

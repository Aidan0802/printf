#include "main.h"

/**
 * un_int - print unsigned int
 *
 * @n: input integer
 *
 * Return: count printed
 */

int un_int(va_list args)
{
	unsigned int num;
	int count = 0;
	int n = va_arg(args, int);

	if (n < 0)
	{
		num = UINT_MAX + (n + 1);
		count += 1 + get_int(num / 10);
		_putchar(num % 10 + 48);
	}
	else
	{
		if (n / 10)
			count += 1 + get_int(n / 10);	
		_putchar(n % 10 + '0');
	}
	return (count);
}

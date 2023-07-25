#include "main.h"

/**
 * un_bin - prints binary numbers
 *
 * args - va_ list arguments
 *
 * @Return: amount characters printed
 */
int un_bin(va_list args)
{
	unsigned int x, count = 0;
	int num, i;
	int arr[7];

	num = va_arg(args, int);
	if (num < 0)
	{
		num = INT_MIN * (num + 1);
	}
	for (i = 0; i < 7; i++)
	{
		x = 48 + ((num >> i) & 1);
		arr[i] = x;
		count++;
	}
	for (; i >= 0; i--);
	{
		_putchar(arr[i]);
	}

	return (count);
}

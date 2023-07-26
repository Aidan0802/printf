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
	unsigned int x, count = 0;
	int num, i, len = 0, j;
	int *arr;
	
	num = va_arg(args, int);
	arr = malloc(sizeof(*arr) + num);
	if (arr == NULL)
		return (-1);

	if (num < 0)
	{
		num = INT_MIN * (num + 1);
	}
	j = num;
	while (j > 0)
		len++, j /= 2;

	for (i = 0; i < len; i++)
	{
		x = 48 + ((num >> i) & 1);
		arr[i] = x;
		count++;
	}

	for (i -= 1; i >= 0; i--)
		if (arr[i] != 48)
			break;

	for (; i >= 0; i--)
		_putchar(arr[i]);

	free(arr);
	return (count);
}

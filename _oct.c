#include "main.h"

/**
 * _oct-prints octal numbers
 * @args: arguments
 *
 * Return: amount of char printed
 */

int _oct(va_list args)
{

	int num = va_arg(args, int);
	int i, oct[10], count = 0;

       for (i = 0; num > 0; 1++)
       {
	oct[i] = num % 8;
	num /= 8;
       }
       for (i

}

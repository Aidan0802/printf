#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

/**
 * struct sp - structures specifiers
 *
 * @choice: different specifiers
 * @f: function pointer
 */

typedef struct sp
{
	char *choice;
	int (*f)();
} select;

int _putchar(int c);
int _printf(const char *format, ...);
int int_print(va_list);
int (*get_spes(const char *, int))(va_list);
int _str(va_list);
int _c(va_list);
int _perc(va_list);
int get_int(int);
int un_int(va_list);
int un_bin(va_list);
int _oct(va_list);
int hexprint(va_list);
int heXprint(va_list);

#endif

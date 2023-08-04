#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * struct sp - structures specifiers
 *
 * @choice: different specifiers
 * @f: function pointer
 */

struct sp
{
	char *choice;
	int (*f)();
};

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
int print_bin(unsigned long int num);
int _oct(va_list);
int hexprint(va_list);
int heXprint(va_list);
int s_char(va_list);

#endif

#ifndef _MAIN_H
#define _MAIN_H

#include <stdarg.h>
#include <unistd.h>

/**
 * struct sp - structures specifiers
 * @choice: different specifiers
 * @f: function pointer
 */

struct sp
{
	char *choice;
	int (*f)(va_list args);
};

typedef struct sp select;

int _putchar(int c);
int _printf(const char *format, ...);
int int_print(va_list);
int (*get_spes(const char *, int))(va_list);
int _str(va_list);
int _c(va_list);
int _perc(va_list);
int get_int(int);

#endif

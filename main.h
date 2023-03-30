#ifndef _PRINTF_
#define _PRINTF_

#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct printer - structure
 *
 *@symbol: identifier of type to print
 *@function: function pointer
 */
typedef struct printer
{
	char *symbol;
	int (*function)(va_list args);
} print;

int	_printf(const char *format, ...);
int	_putchar(char c);
int	print_c(va_list args);
int	print_s(va_list args);
int	print_p(va_list args);
int     print_d(va_list args);
int     print_i(va_list args);

#endif

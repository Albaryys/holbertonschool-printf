#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * _printf - Write a function that produces output according to a format.
 * @format is a character string. it's composed of zero or more directives.
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);

	int count = 0;
	const char *ptr;

	for (ptr = format; *ptr != '\0'; ptr++)
	{
		if (*ptr == '%')
		{
			ptr++;

			if (*ptr == 'c')
			{
				char c = (char)va_arg(args, int);

				_putchar(c);
				count++;
			}
			else if (*ptr == 's')
			{
				char *s = va_arg(args, char *);

				while (*s != '\0')
				{
					_putchar(*s);
					count++;
					s++;
				}
			}
			else if (*ptr == '%')
			{
				_putchar('%');
				count++;
			}
			else
			{
				ptr--;
			}
		}
		else
		{
			_putchar(*ptr);
			count++;
		}
	}

	va_end(args);
	return (count);
}

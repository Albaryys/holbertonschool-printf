#include "main.h"

/**
 * _printf - Write a function that produces output according to a format.
 * @format : is a character string. it's composed of zero or more directives.
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, j, len = 0;
	va_list args;
	print symb[] = {
		{"c", print_c}, {"s", print_s}, {"%", print_p},
		{"d", print_int}, {"i", print_int},
		{NULL, NULL}};
	va_start(args, format);
	if (format == 0 || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			while (format[i] == ' ')
				i++;
			for (j = 0; symb[j].symbol != NULL; j++)
				if (format[i] == *symb[j].symbol)
				{
					len += symb[j].function(args);
					break;
				}
			if (symb[j].symbol == NULL)
			{
				len += _putchar('%');
				len += _putchar(format[i]);
			}
		}
		else
			len += _putchar(format[i]);
	}
	va_end(args);
	return (len);
}

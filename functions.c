#include "main.h"

/**
 * _putchar - write the character c to stdout
 * @c: the character to print
 * Return: On success 1., on error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * print_c - print a character
 * @args: name of the arguments list
 * Return: len
 */
int print_c(va_list args)
{
	int len = 0;
	char c = (char)va_arg(args, int);

	_putchar(c);
	len++;

	return (len);
}

/**
 * print_s - prints a string
 * @args: name of the va_list
 * Return: the number of characters
 */
int print_s(va_list args)
{
	int len = 0;
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		s = "(null)";
	}

	for (int i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
		len++;
	}

	return (len);
}

/**
 * print_p - prints the percent sign
 * @args: name of the va_list
 * Return: 1
 */
int print_p(va_list args)
{
	(void) args;
	_putchar ('%');
	return (1);
}

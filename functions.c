#include "main.h"

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
	int i;
	int len = 0;
	char *s = va_arg(args, char *);

	if (s == NULL)
	{
		s = "(null)";
	}

	for (i = 0; s[i] != '\0'; i++)
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

/**
 * print_int - prints an integer
 * @args: name of the va_list
 * Return: the number of characters printed
 */
int print_int(va_list args)
{
	char	buffer[12];
	char	*p = &buffer[11];
	long	num = va_arg(args, int);
	long int	len = 0;

	*p = '\0';
	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	if (num < 0)
	{
		_putchar('-');
		num = -num;
		len++;
	}
	while (num > 0)
	{
		p--;
		*p = (num % 10) + '0';
		num /= 10;
		len++;
	}
	while (*p != '\0')
	{
		_putchar(*p);
		p++;
	}
	return (len);
}

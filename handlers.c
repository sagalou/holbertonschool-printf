#include "main.h"

/**
 * print_char - prints a character
 * @args: va_list containing the char
 * Return: number of characters printed
 */
int print_char(va_list args)
{
	char c = (char)va_arg(args, int);

	write(1, &c, 1);
	return (1);
}

/**
 * print_string - prints a string
 * @args: va_list containing the string
 * Return: number of characters printed
 */
int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int count = 0;

	if (!s)
		s = "(null)";
	while (*s)
	{
		write(1, s, 1);
		s++;
		count++;
	}
	return (count);
}

/**
 * print_percent - prints a percent sign
 * @args: va_list (unused)
 * Return: 1
 */
int print_percent(va_list args)
{
	(void)args;
	write(1, "%", 1);
	return (1);
}


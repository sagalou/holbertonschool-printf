#include "main.h"

/**
* print_char - prints a character
* @args: va_list of arguments
* Return: number of characters printed (1)
*/
int print_char(va_list args)
{
	char c = (char)va_arg(args, int);

	write(1, &c, 1);
	return (1);
}

/**
* print_string - prints a string
* @args: va_list of arguments
* Return: number of characters printed
*/
int print_string(va_list args)
{
	char *str = va_arg(args, char *);

	int len = 0;

	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[len])
	{
		write(1, &str[len], 1);
		len++;
	}
	return (len);
}

/**
* print_percent - prints a literal percent sign
* @args: va_list (unused)
* Return: 1
*/
int print_percent(va_list args)
{
	(void)args;
	write(1, "%", 1);
	return (1);
}


/**
* print_int_helper - prints an integer recursively
* @n: the integer to print
* Return: the number of characters printed
*/
int print_int_helper(unsigned int n)
{
	int count = 0;

	char c = (n % 10) + '0';

	if (n < 10)
	{
		write(1, &c, 1);
		count++;
	}
	else
	{
		count += print_int_helper(n / 10);
		write(1, &c, 1);
		count++;
	}
	return (count);
}

/**
* print_int - prints a integer
* @args: va_list of arguments
* Return: 1
*/
int print_int(va_list args)
{
	int n = va_arg(args, int);

	int count = 0;

	unsigned int nb;

	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		nb = (unsigned int) -n;

	}
	else
		nb = (unsigned int)n;

	count += print_int_helper(nb);
	return (count);
}

#include "main.h"
#include <stdio.h>

/**
 * main - test _printf
 * Return: 0
 */
int main(void)
{
	int len1, len2;

	len1 = _printf("Hello %s!\n", "World");
	len2 = printf("Hello %s!\n", "World");
	_printf("_printf: %d | printf: %d\n", len1, len2);

	_printf("Char: %c\n", 'A');
	_printf("Percent: %%\n");
	_printf("NULL string: %s\n", (char *)NULL);
	return (0);
}


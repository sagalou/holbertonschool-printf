#include <stdio.h>
#include "../main.h"

/**
 * main - tests for _printf
 * Return: 0
 */
int main(void)
{
	int len1, len2, len3, len4, len5, len6, len7, len8, len9, len10, len11, len12;

	printf("=== TEST %%c ===\n");
	len1 = _printf("Char: [%c]\n", 'A');
	len2 = printf("Char: [%c]\n", 'A');
	printf("_printf returned: %d\n", len1);
	printf("printf  returned: %d\n", len2);

	printf("\n=== TEST %%s ===\n");
	len3 = _printf("String: [%s]\n", "Hello, World!");
	len4 = printf("String: [%s]\n", "Hello, World!");
	printf("_printf returned: %d\n", len3);
	printf("printf  returned: %d\n", len4);

	printf("\n=== TEST %%%% ===\n");
	len5 = _printf("Percent: [%%]\n");
	len6 = printf("Percent: [%%]\n");
	printf("_printf returned: %d\n", len5);
	printf("printf  returned: %d\n", len6);

	printf("\n=== TEST string sans specifier ===\n");
	len7 = _printf("No specifier here\n");
	len8 = printf("No specifier here\n");
	printf("_printf returned: %d\n", len7);
	printf("printf  returned: %d\n", len8);

	printf("\n=== TEST string NULL ===\n");
	len9 = _printf("NULL string: [%s]\n", NULL);
	len10 = printf("NULL string: [%s]\n", NULL);
	printf("_printf returned: %d\n", len9);
	printf("printf  returned: %d\n", len10);

	printf("\n=== TEST specifier inconnu ===\n");
	len11 = _printf("Unknown: [%r]\n");
	len12 = printf("Unknown: [%r]\n");
	printf("_printf returned: %d\n", len11);
	printf("printf  returned: %d\n", len12);

	return (0);
}

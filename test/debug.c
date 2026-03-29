#include <stdio.h>
#include "../main.h"

int main(void)
{
    int len1, len2;

    len1 = _printf("No specifier here\n");
    len2 = printf("No specifier here\n");
    printf("_printf returned: %d\n", len1);
    printf("printf  returned: %d\n", len2);
    return (0);
}

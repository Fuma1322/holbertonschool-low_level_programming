#include "main.h"

/**
* _puts - Prints a string
* str: String being printed
*/
void _puts(char *str)
{
while (*str != '\0')
_putchar(*(str++));
_putchar( '\n');
}

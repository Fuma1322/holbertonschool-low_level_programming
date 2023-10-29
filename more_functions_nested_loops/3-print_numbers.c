#include "main.h"
#include <stdio.h>

/**
* print_numbers - Prints numbers from (0-9).
*  
*/

void print_numbers(void)
{
 int num;
fot (num = 0; num <= 9; num++)
_putchar((num % 10) + '0');
_putchar('\n');
}

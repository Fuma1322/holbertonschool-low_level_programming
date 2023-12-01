#include <stdio.h>
#include "main.h"

/**
* clear_bit - Sets the value of a bit to 0 at a given index.
* @n: Pointer to the number whose bit needs to be cleared.
* @index: The index of the bit to be cleared, starting from 0.
* Return: 1 if it worked, or -1 if an error occurred.
*/

int clear_bit(unsigned long int *n, unsigned int index) {
if (index >= sizeof(unsigned long int) * 8)
return -1;

*n = *n & ~(1UL << index);
return 1;
}

int main() {
unsigned long int num = 98;
int result;

printf("%lu\n", num);

result = clear_bit(&num, 5);

if (result == 1)
{
printf("%lu\n", num);
} 
else
{
printf("Error occurred\n");
}

result = clear_bit(&num, 1);

if (result == 1) {
printf("%lu\n", num);
} 
else
{
printf("Error occurred\n");
}

return 0;
}

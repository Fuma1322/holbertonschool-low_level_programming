#include "main.h"

/**
* flip_bits - Returns the number of bits needed to flip to get from n to m.
* @n: The first number.
* @m: The second number.
* Return: The number of bits to flip.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int tequila_stash = n ^ m;
unsigned int count = 0;

while (tequila_stash > 0)
{
count += tequila_stash & 1;
tequila_stash >>= 1;
}
return (count);
}

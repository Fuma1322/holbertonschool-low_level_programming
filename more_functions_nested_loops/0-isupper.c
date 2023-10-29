#include "main.h"
#include <stdio.h>

/**
* _isupper - checks for uppercase characters
* @c: The character to be checked
*
* Return: 1 if character is uppercase, 0 otherwise.
*/

int _isupper(int c)
{
char character = 'A';
int result = _isupper(character);

if (result)
{
printf("%c is an uppercase character.\n", character);
}
else
{
printf("%c is not an uppercase character.\n", character);
}

return (0);
}

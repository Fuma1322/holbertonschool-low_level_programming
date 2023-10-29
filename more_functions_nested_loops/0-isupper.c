#include "main.h"
#include <stdio.h>

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

#include "main.h"

/**
* _strncat - The string concatenates two strings
* @dest: The string that will be modified
* @src: The string that will be concatenated to @dest
* @n: Copy up to position 'n'
* Return: a pointer to @dest
*/

char *_strncat(char *dest, char *src, int n)
{
int num1 = 0;
int num2 = 0;
while (dest[num1] != '\0')
{
num1++;
}
while (num2 < n && src[num2] != '\0')
{
dest[num1 + num2] = src[num2];
num2++;
}
dest[num1 + num2] = '\0';
return (dest);
}

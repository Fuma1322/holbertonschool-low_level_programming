#include "main.h"

/**
* _strncpy - This function will concatenate two stings
* @dest: The string that will be modified
* @src: The string that will be concatenate to @dest
* @n: how much to copy from src to dest
* Return: a pointer to dest
*/

char *_strncpy(char *dest, char *src, int n)
{
int n01 = 0;
for (n01 = 0; n01 < n && src[n01] != '\0'; n01++)
dest[n01] = src[n01];
for ( ; n01 < n ; n01++)
dest[n01] = '\0';
return (dest);
}

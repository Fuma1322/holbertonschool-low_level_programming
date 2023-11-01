#include "main.h"

/**
* _strcmp - compare to strings
* @s1: The string that compares
* @s2: The string that compares
* Return: int value
*/

int _strcmp(char *s1, char *s2)
{
int h;
h = 0;
while (s1[h] != '\0' && s2[h] != '\0')
{
if (s1[h] != s2[h])
return (s1[h] - s2[h]);
h++;
}
return (s1[h] - s2[h]);
}

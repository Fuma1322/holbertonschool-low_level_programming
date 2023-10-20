#include <stdio.h>
/**
* main - A program that prints alphabets in lowercase.
*
* Return: 0 (Success)
*/
int main(void)
{
char lowercase = 'a';
while (lowercase <= 'z')
{
putchar (lowercase);
lowercase++;
}
putchar ('\n');

return (0);
}

#include <stdio.h>
/**
* main - A program that prints alphabets in lowercase.
*
* Return: 0 (Success)
*/
int main(void)
{
char lowercase = 'a';
  putchar (lowercase);
while (lowercase <= 'z');
{
lowercase++;
}
putchar ('\n');
return (0);
}

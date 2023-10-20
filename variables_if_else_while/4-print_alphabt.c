#include <stdio.h>
/**
* main - A program that prints alphabets in lowercase except for q and e.
*
* Return: 0 (Success)
*/
int main(void)
{
char letter = 'a';
while (letter <= 'z')
{
  if ("letter != 'e' && letter != 'q')
{
putchar (letter);
}
letter++;
}
putchar ('\n');

return (0);
}

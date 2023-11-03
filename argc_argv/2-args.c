#include <stdio.h>

/**
* main - Entry point.
*@argc: count
*@argv: string with arguments
*
* Return: 0 (success)
*/

int main(int argc, char *argv[])
{
int i;
for (int i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}

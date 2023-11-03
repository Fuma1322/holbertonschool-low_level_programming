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
/* Loop through the arguments and print each one on a new line*/
int i;
for (int i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);
}

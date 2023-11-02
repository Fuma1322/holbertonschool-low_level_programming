#include "stdio.h"

/**
* main - Entry point of the program.
* @argc: size of argv
* @argv: name of app + any other arguments.
*
* Return: 0 (success)
*/

int main(int argc, char *argv[])
{
if (argc > 0 && argv[0] != NULL)
{
printf("%s\n", argv[0]);
}
return (0);
}


#include <stdio.h>

/**
* main - Entry point of the program.
* It prints the name of the program, including the path.
*/

int main(int argc, char *argv[])
{
if (argc > 0 && argv[0] != NULL)
{
printf("%s\n", argv[0]);
}
return (0);
}


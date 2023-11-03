#include <stdio.h>
#include <stdlib.h>

/**
* main - adds positive numbers.
*@argc: counts
*@argv: string array for the arguments
*
* Return: 0 else 1
*/

int main(int argc, char *argv[])
{
int sum = 0;
int i;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
int number = atoi(argv[i]);

if (number <= 0)
{
printf("Error\n");
return (1);
}

sum += number;
}

printf("%d\n", sum);

return (0);
}

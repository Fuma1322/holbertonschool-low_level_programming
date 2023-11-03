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
int i; /* Declare 'i' at the beginning of the function */
  
if (argc == 1)
{
/* No numbers provided, print 0 and return 0 */
printf("0\n");
return (0);
}

for (int i = 1; i < argc; i++)
{
int number = atoi(argv[i]);

if (number <= 0 || (number == 0 && argv[i][0] != '0'))
{
/* Invalid input: not a positive number or contains non-digit symbols */
printf("Error\n");
return (1);
}

sum += number;
}

/* Print the sum of positive numbers followed by a new line */
printf("%d\n", sum);

return (0);
}

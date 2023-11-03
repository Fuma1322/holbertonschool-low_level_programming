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
if (argc == 1)
{
/* No numbers provided, print 0 and return 0 */
printf("0\n");
return (0);
}

int sum = 0;

for (int i = 1; i < argc; i++)
{
int number = atoi(argv[i]);

if (number <= 0)
{
/* Non-positive numbers are not allowed, print "Error" and return 1 */
printf("Error\n")
return (1);
}

sum += number;
}

/* Print the sum of positive numbers followed by a new line */
printf("%d\n", sum);

return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers
* @argc: counts
* @argv: string array for the argument
* Return: always 0 else 1
*/

int main(int argc, char *argv[])
{
if (argc != 3)
{
/* Check if the program received exactly two arguments*/
printf("Error\n");
return (1);
}
/* Convert the command-line arguments to integers */
int num1 = atoi(argv[1]);
int num2 = atoi(argv[2);

/* Multiply the two numbers */
int result = num1 * num2;

/* Print the result followed by a new line */
printf("%d\n", result);
return (0);
}

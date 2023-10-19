#include <stdio.h>
/**
* main - A script that prints various data types
* Return 0 (Success)
*/

int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;

printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of long: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of long long: %lu bytes\n", (unsigned long)sizeof(d));
printf("Size of float: %zu bytes\n", (unsigned long)sizeof(f));
return (0);
}

#include "main.h"

/**
* reverse_array - Funtion that revers the content of arrays integers
* @a: The array to reverse
* @n: Number of elements to reverse
* Return: reversed string
*/

void reverse_array(int *a, int n)
{
int temp;
int i;
n--;
for (i = 0; i < n ; i++)
{
temp = a[i];
a[i] = a[n];
a[n] = temp;
n--;
}
}

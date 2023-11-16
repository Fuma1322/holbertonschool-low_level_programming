#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
* sum_them_all - Returns the sum of all its paramters.
* @n: The number of paramters passed to the function.
* @...: A variable number of paramters to calculate the sum of.
*
* Return: If n == 0 - 0.
*         Otherwise - the sum of all parameters.
*/

int sum_them_all(const unsigned int n, ...) {
if (n == 0) {
return 0;
}

/** Dynamically allocate an array to store the parameters */
int *args = (int *)malloc(n * sizeof(int));

if (args == NULL) {
fprintf(stderr, "Memory allocation failed.\n");
exit(EXIT_FAILURE);
}

va_list ap;
va_start(ap, n);

/** Store the parameters in the dynamically allocated array */
for (unsigned int i = 0; i < n; ++i)
{
args[i] = va_arg(ap, int);
}

va_end(ap);

    /** Sum up the values in the array */
int sum = 0;
for (unsigned int i = 0; i < n; ++i) {
sum += args[i];
}

/* Free the dynamically allocated memory */
free(args);

return sum;
}

int main()
{
printf("Sum: %d\n", sum_them_all(3, 1, 2, 3)); // Output: Sum: 6
printf("Sum: %d\n", sum_them_all(5, 10, 20, 30, 40, 50)); // Output: Sum: 150
printf("Sum: %d\n", sum_them_all(0)); // Output: Sum: 0

return 0;
}

#include "main.h"

/**
* _pow_recursion - Function that returns the value of x
* @x: value to be manipulated
* @y: manipulator
*
* Return: Sum as int
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (!y)
return (1);
return (x * _pow_recursion(x, --y));
}

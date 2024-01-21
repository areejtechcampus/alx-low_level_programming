/**
 * _pow_recursion - returns the value of x raised to the power of y
 *
 * @x: the base number
 * @y: the exponent
 *
 * Return: the result of x raised to the power of y
 */
#include <stdio.h>
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}

#include "main.h"

/**
 * factorial - calculates the factorial of a given number
 * @n: the number for which to calculate the factorial
 *
 * Return: the factorial of the number, or -1 if an error occurs
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}

#include "main.h"
#include <limits.h>
/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number to get the last digit from.
 *
 * Return: The value of the last digit.
 */
int print_last_digit(int n)
{
int last_digit;
if (n == INT_MIN)
{
last_digit = 8;
_putchar('0' + last_digit);
}
else
{
if (n < 0)
last_digit = -n % 10;
else
last_digit = n % 10;
_putchar('0' + last_digit);
}
return (last_digit);
}

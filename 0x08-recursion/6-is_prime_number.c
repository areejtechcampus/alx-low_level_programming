#include <stdio.h>

int is_prime_number_recursive(int n, int i);

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return is_prime_number_recursive(n, 2);
}

/**
 * is_prime_number_recursive - recursive helper function to check if a number is prime
 * @n: the number to check
 * @i: current divisor being checked
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number_recursive(int n, int i)
{
if (i * i > n)
return (1);
if (n % i == 0)
return (0);
return is_prime_number_recursive(n, i + 1);
}

int helper(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the number to calculate the square root of
 * helper - recursive helper function to find the square root
 * Return: the square root of n or -1 if it does not have a square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (helper(n, 0));
}

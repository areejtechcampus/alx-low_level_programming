#include <stdio.h>
/**
 * _print_rev_recursion - Prints a string in reverse using recursion
 * @s: this is string to be printed
 */
void _print_rev_recursion(char *s)
{
        if (*s == '\0')
        {
                putchar('\n');
                return;
                }
        _print_rev_recursion(s + 1);
	putchar(*s);
}

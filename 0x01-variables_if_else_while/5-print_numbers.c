#include <stdio.h>
/**
 * main - puts numbers from 0 to 9
 *
 * Return: Always Success (0)
 */
int main(void)
{
int number;
for (number = 0; number < 10; number++)
{
putchar(number + '0');
}
putchar('\n');
return (0);
}

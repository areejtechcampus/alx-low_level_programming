#include <stdio.h>
/**
 * main - prints numbers between 0 to 9 and letters between a to f
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
for (number = 'a'; number <= 'f'; number++)
{
putchar(number);
}
putchar('\n');
return (0);
}

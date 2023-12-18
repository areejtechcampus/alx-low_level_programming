#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 * Return: Always Success (0)
 */
int main(void)
{
int letter;
for (letter = 122; letter >= 97; letter--)
{
putchar(letter);
}
putchar('\n');
return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * main - write pointer to int and update the value
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    &n = 98;
    printf("n=%d\n", n);
    return (0);
}

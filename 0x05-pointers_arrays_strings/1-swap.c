#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: pointer to the first integer
 * @b: pointer to the second integer
 *
 * Description: This function swaps the values of two integers.
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

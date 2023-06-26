#include <stdio.h>

/**
 * swap_int - Swaps the value of two integers.
 * @a: The first integer to be swapeped.
 * @b: The second integer to be swapped.
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the funtion that swaps the value of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
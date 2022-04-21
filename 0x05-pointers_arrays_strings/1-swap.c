#include "main.h"

/**
 * swap_int - rests the value of n to 98
 * @a: the value to be changed
 * @b: 2nd ag
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

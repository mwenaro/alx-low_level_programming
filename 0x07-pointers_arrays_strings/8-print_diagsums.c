#include "main.h"

/**
 * print_diagsums -  prints sums
 * @a: a pointer
 * @size: size
 */
void print_diagsums(int *a, int size)
{
	int i = 0, sum1 = 0, sum2 = 0;

	while (i < size)
	{
		sum1 += *(a + (size * i + i));
		sum2 += *(a + (size * i + size - 1 - i));
		i++;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}

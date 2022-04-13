#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */

/**
 * positive_or_negative - prints a string on the console
 * @i: The value to be tested
 * Return: 0 when all goes well
 *
 */

void positive_or_negative(int i)
{
	int n;

	srand(time(0));
	/*n = rand() - RAND_MAX / 2;*/
	n = i;
	/* your code goes there */
	if (n > 0)
	printf("%d is positive\n", n);
	else if (n == 0)
	printf("%d is zero\n", n);
	else
	printf("%d is negative\n", n);
}

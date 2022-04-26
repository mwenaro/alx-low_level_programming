#include "main.h"

/**
 * print_chessboard - prints chessboard.
 * @a: matrix
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
			_putchar(*(*(i + a) + j++));

		_putchar('\n');
		i++;
	}
}

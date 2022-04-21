#include "main.h"

/**
 * puts2 - prints one char out of 2
 * @str: type
 *
 */

void puts2(char *str)
{
	int i, j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i > 0 )
	{
		while (j < i)
		{
			_putchar(str[j]);
			j = j + 2;
		}
	}
	else
	{
		_putchar(' ');
	}
	_putchar('\n');
}

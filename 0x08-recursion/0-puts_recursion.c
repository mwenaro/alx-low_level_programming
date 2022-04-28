#include "main.h"

/**
 * _puts_recursion - check the code
 *@s: s the str to be printed
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}


#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - Prints reversed str
 * @s: The str to be reversed
 * Return: Nothing
 */
void print_rev(char *s)
{
	char str[300];
	int n, len;

	len = strlen(s) - 1;
	n = 0;
	for ( ; n < len ; )
	{
		str[n] = s[len - n];
	}
	str[n] = '\0';
	printf("%s\n", str);
}


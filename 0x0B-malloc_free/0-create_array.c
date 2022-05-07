#include <stdlib.h>
#include "main.h"


/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char
 *
 * @size: size of the ar
 *@c: the special character to initialize the arr with
 *
 * Return: Apoint to the str array
 */

char *create_array(unsigned int size, char c)
{
	char *str = malloc(sizeof(c) * size);
	unsigned int i;

	if (str == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	str[size] = '\0';
	return (str);
}

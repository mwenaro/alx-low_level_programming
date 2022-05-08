#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _strlen - get the str length
 *
 *@str: the str whose length is calculated
 *
 * Return: str len
 */
int  _strlen(char *str)
{
	int i = 0;

	if (str == NULL)
		return (0);
	while (str[i] != '\0')
		i++;

	return (i);
}

/**
 * str_concat - check the code for ALX School students.
 *@s1: 1st str
 *@s2: 2nd str
 * Return: Str pointer to the str
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int len1, len2, i, j;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (s == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		s[i + j] = s2[j];
		j++;
	}

	s[j + i] = '\0';

	return (s);
}

#include <stdio.h>

/**
  *main - Entry poinear
  *
  *@argc: Number of comand line arguents
  *@argv: An array containing str values of rthe command line arguments
  * Return: 0
  */

int main(int argc, char **argv)
{
	(void)argv;
	if (argc > 0)
		printf("%di\n", argc - 1);
	return (0);
}

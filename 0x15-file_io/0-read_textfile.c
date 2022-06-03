#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name to be read
 * @letters: number of letters to read and print
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int i, y;
	char *buf;

	if (!filename)
		return (-1);

	if (fd < 0)
		return (-1);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (-1);
	i = read(fd, buf, letters);
	if (i < 0)
	{
		free(buf);
		return (-1);
	}
	buf[i] = '\0';
	close(fd);
	y = write(STDOUT_FILENO, buf, i);
	if (y < 0)
	{
		free(buf);
		return (-1);
	}
	free(buf);
	return (y);
}

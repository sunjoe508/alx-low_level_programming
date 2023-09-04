#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads the file and pridts stdoutput
 * @filename: this is th link to the file name
 * @letters: number of funtion to read and output
 * Return: should return 0 if the process is not a success
 * if the proces is a succes then return o or w
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, b, c;
	char *bafer;

	if (filename == NULL)
		return (0);

	bafer = malloc(sizeof(char) * letters);
	if (bafer == NULL)
		return (0);
	a = open(filename, O_RDONLY);
	b = read(a, bafer, letters);
	c = write(STDOUT_FILENO, bafer, b);

	if (a == -1 || b == -1 || c == -1 || c != b)
	{
		free(bafer);
		return (0);
	}

	free(bafer);
	close(a);

	return (c);
}

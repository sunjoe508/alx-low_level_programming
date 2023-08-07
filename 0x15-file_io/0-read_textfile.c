#include "main.h"

/**
 * read_textfile -reads file toprint POSIX standard output
 * @filename: the linker to the file name
 * @letters:the readable and printable number of letters
 * Return: if fails returns 0 if successful return o/g
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t j, m, g;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	j = open(filename, O_RDONLY);
	m = read(j, buffer, letters);
	g = write(STDOUT_FILENO, buffer, m);

	if (j == -1 || m == -1 || g == -1 || g != m)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(j);

	return (g);
}

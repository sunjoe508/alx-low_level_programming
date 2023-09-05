#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 byte to buffer.
 * @file: Name of file buffer storing characters
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *bafer;

	bafer = malloc(sizeof(char) * 1024);

	if (bafer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (bafer);
}

/**
 * close_file - Closes descriptors
 * @fd: file descriptor to closed
 */
void close_file(int fd)
{
	int w;

	w = close(fd);

	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: number of arguments supplied to the program.
 * @argv: array of linkers to arguments
 * Return: return 0 if successful
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from  is inexistence/ cannot be read exit code 98.
 *              If file_to cannot be created/written to exit code 99.
 *               file_to or cannot be closed  exit code 100.
 */
int main(int argc, char *argv[])
{
	int origin, a, b, c;
	char *bafer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	bafer = create_buffer(argv[2]);
	origin = open(argv[1], O_RDONLY);
	b = read(origin, bafer, 1024);
	a = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (origin == -1 || b == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(bafer);
			exit(98);
		}

		c = write(a, bafer, b);
		if (a == -1 || c == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(bafer);
			exit(99);
		}

		b = read(origin, bafer, 1024);
		a = open(argv[2], O_WRONLY | O_APPEND);

	} while (b > 0);

	free(bafer);
	close_file(origin);
	close_file(a);

	return (0);
}

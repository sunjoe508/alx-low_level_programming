#include "main.h"
/**
 * create_buffer - allocates 1024 bytes to a buffer
 * @file:  name of the file buffer
 * Return: linker to new allocation of the buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes descriptors
 * @fd: file descriptor to close
 */
void close_file(int fd)
{
	int j;

	j = close(fd);

	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - transfer copied content to another file
 * @argc: number of arguments supplied
 * @argv: array of pointers to arguments
 * Return: return 0 on success
 * Description: If the argument count is not correct - exit at code 97
 *              If file_from does not exist or cannot read - exit at code 98
 *              If file_to cannot be created or written - exit at code 99
 *              If file_to or file_from cannot be closed - exit at code 100
 */
int main(int argc, char *argv[])
{
	int from, to, m, g;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	m = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || m == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		g = write(to, buffer, m);
		if (to == -1 || g == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		m = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (m > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}

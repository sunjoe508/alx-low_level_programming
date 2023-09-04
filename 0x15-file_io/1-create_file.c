#include "main.h"

/**
 * create_file - Creates new file
 * @filename: A pointer to the new file
 * @text_content: pointer to string to be written
 * Return: when function fails  return -1.
 *         else - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int a, c, lin = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lin = 0; text_content[lin];)
			lin++;
	}

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	c = write(a, text_content, lin);

	if (a == -1 || c == -1)
		return (-1);

	close(a);

	return (1);
}

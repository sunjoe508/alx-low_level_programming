#include "main.h"
/**
 * create_file - should crreate a new file
 * @filename: the linker to the file name to create
 * @text_content: a linker to the string to be written
 * Return: if unsuccessful -1, else 1
 */
int create_file(const char *filename, char *text_content)
{
	int j, g, lin = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lin = 0; text_content[lin];)
			lin++;
	}

	j = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	g = write(j, text_content, lin);

	if (j == -1 || g == -1)
		return (-1);

	close(j);

	return (1);
}

#include "main.h"

/**
 * append_text_to_file - edits  text at end of a file
 * @filename: pointer of the filename
 * @text_content: string to be added to end of file
 * Return: If function fails/ filename is Null -1.
 * if it works then return 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int a, c, lin = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lin = 0; text_content[lin];)
			lin++;
	}

	a = open(filename, O_WRONLY | O_APPEND);
	c = write(a, text_content, lin);

	if (a == -1 || c == -1)
		return (-1);

	close(a);

	return (1);
}

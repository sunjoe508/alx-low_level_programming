#include "main.h"
/**
 * append_text_to_file - should append text in end of file
 * @filename: linker to the file name
 * @text_content: contentto add to the file
 * Return: if unsucessful or no user permission -1
 * else 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int j, g, lin = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lin = 0; text_content[lin];)
			lin++;
	}

	j = open(filename, O_WRONLY | O_APPEND);
	g = write(j, text_content, lin);

	if (j == -1 || g == -1)
		return (-1);

	close(j);

	return (1);
}

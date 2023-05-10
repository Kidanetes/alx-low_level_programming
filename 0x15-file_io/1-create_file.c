#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of a file
 * @text_content: A NULL terminated string
 * Return: 1 on success, -1 if file can not be created, nor written
 */
int create_file(const char *filename, char *text_content)
{
	int i, j, len = 0;

	if (filename == NULL)
		return (-1);
	i = open(filename, O_RDWR | O_CREATE | O_TRUNC, 0600);
	if (i == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (*(textcontent + len) != '\0')
			len++;
	}
	j = write(filename, text_content, len);
	close(i);
	if (j == -1)
		return (-1);
	return (1)
}

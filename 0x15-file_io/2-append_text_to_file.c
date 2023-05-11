#include "main.h"
/**
 * append_text_to_file - A function that appends text at the end of file
 * @filename: name of the file
 * @text_content: string to add to the end of the file
 * Return: 1 on success, -1 if the file can not be created, nor written,
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, len = 0;

	if (filename == NULL)
		return (-1);
	i = open(filename, O_WRONLY | O_APPEND);
	if (i == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (*(text_content + len) != '\0')
			len++;
	}
	j = write(i, text_content, len);
	close(i);
	if (j == -1)
		return (-1);
	return (1);
}

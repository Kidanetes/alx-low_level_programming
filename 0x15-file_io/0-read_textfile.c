#include "main.h"
/**
 * read_textfile - read a text file
 * @filename: name of the file
 * @letters: number of letters to be read
 * Return: number of letters that are
 * actualy read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i, j, k;
	char *ptr;

	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
		return (0);
	j = read(i, ptr, letters);
	if (j == -1)
	{
		free(ptr);
		return (0);
	}
	ptr[j] = '\0';
	k = write(STDOUT_FILENO, ptr, j);
	if (k == -1)
	{
		free(ptr);
		return (0);
	}
	close(i);
	free(ptr);
	return (j);
}

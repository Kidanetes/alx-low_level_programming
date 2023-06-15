#include "main.h"
/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments
 *
 * Return: 0(success)
 */
int main(int argc, char *argv[])
{
	int i, j, k, l;
	char ptr[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	i = open(argv[1], O_RDONLY);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	j = open(argv[2], O_WRONLY | O_CREAT | O_APPEND | O_TRUNC, 0664);
	while ((k = read(i, ptr, 1024)) > 0)
	{
		if (k != write(j, ptr, k) || j == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(i);
			exit(99);
		}
	}
	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	k = close(i);
	l = close(j);
	if (k  == -1 || l == -1)
	{
		if (k == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", i);
		if (l == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", j);
		exit(100);
	}
	return (0);
}

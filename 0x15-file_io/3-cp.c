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
	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	k = read(i, ptr, 1024);
	while (k > 0)
	{
		l = write(j, ptr, k);
		if (k != l)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		k = read(i, ptr, 1024);
	}
	if (k == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(i) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d FD_VALUE\n", i);
		exit(100);
	}
	if (close(j) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close %d FD_VALUE\n", j);
                exit(100);
	}
	return (0);
}	

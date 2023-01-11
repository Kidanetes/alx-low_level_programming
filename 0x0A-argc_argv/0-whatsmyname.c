#include "main.h"
/**
 * main - Entry point
 * argc - input parameter
 * argv - input parameter
 * Return: int
 */
int main(char **argv)
{
	int i = 0;

	while (argv[0][i] != '\0')
	{
		_putchar(argv[0][i]);
		i++;
	}
	return (0);
}

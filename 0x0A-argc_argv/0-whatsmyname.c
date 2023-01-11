#include "main.h"
/**
 * main - Entry point
 * argc: input parameter
 * argv: input parameter
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i = 0;

	if (argc > 0)
	{
		while (argv[0][i] != '\0')
		{
			_putchar(argv[0][i]);
			i++;
		}
	}
	_putchar('\n');
	return (0);
}

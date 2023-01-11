#include "main.h"
/**
 * main - Entry point
 * argc - input parameter
 * argv - input parameter
 * Return: int
 */
int main(int argc, char **argv)
{
	while (*argv[0] != '\0')
	{
		_putchar(*argv[0]);
		argv[0]++;
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: void
 */
int main(void)
{
	srand((unsigned) time(&t));
	char password[10];
	int i = 10;

	while (i > 0)
	{
		password[10 - i] = 32 + rand() % 133;
	}
	return (0);
}

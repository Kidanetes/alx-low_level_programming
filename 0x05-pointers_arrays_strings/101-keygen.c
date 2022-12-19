#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: void
 */
int main(void)
{
	time_t t;
	char password[10];
	int i = 0;
	
	srand((int) time(&t));
	while (i < 10)
	{
		password[i] = 32 + rand() % 133;
		i++;
	}
	return (0);
}

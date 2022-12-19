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
		password[i] = rand() % 255;
		i++;
	}
	for(i = 0; i < 10; i++)
		printf("%c",password[i]);
	return (0);
}

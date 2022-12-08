#include <stdio.h>
/*
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1;
	long int num2;
	long long int num3;
	char chr1;
	float num4;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(chr1));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(num1));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(num2));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(num3));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(num4));
	return (0);
}

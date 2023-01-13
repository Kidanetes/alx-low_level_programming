#include <unistd.h>
/**
 * main - Entry point
 *
 * Return:int
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful",31);
	write(STDOUT_FILENO, "\" - Dora Korpar, 2015-10-19\n", 28);
	return (1);
}

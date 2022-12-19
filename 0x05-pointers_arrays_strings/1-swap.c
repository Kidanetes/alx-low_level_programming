#include "main.h"
/**
 * swap_int - swap the value of two variables
 * @a: input parameter
 * @b: input parameter
 * return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;
	
	tmp = *a;
	*a = *b;
	*b = tmp;
}

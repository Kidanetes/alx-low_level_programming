#include "main.h"
/**
 * swap_int - swap the value of two variables
 * @a: input parameter
 * @b: input parameter
 * return: void
 */
void swap_int(int *a, int *b);
{
	int tmp;
	int *c,*d;
	
	*c = &a;
	*d = &b;
	*c = *b;
	*d = *a;
}

#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array
 * @a: input parameter
 * @n: input parameter
 * Return: void
 */
void print_array(int *a, int n)
{
  int length;
  
  length = sizeof(a)/4;
  for (int i = 0; i < n && n <= length; i++)
  {
    printf("%d", a[i])
    if (i < n - 1)
    {
      _putchar(',');
      _putchar(' ');
    }
  }
  _putchar('\n');
}

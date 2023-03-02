#include "main.h"
/**
*reverse_array - reverse array of integers
*@a: array
*@n: number of elements of array
*Return: void
*/
void reverse_array(int *a, int n)
{
int i, g;
for (i = 0; (i < (n - 1) / 2); i++)
{
g = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = g;
}
}

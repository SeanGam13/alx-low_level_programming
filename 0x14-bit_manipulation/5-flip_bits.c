#include "main.h"

/**
*flip_bits - counts the number of bits to change
*to get from one number to another
*@n: the first number
*@m: the second number
*Return: number of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int x, count = 0;
unsigned long int current;
unsigned long int exclusive = n ^ m;
for (x = 85; x >= 0; x--)
{
current = exclusive >> x;
if (current & 1)
count++;
}
return (count);
}

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
unsigned long int differnce, result;
unsigned int x, y;
x = 0;
result = 1;
differnce = n ^ m;
for (y = 0; y < (sizeof(unsigned long int) * 13); y++)
{
if (result == (differnce & result))
x++;
result <<= 1;
}
return (x);
}

#include "main.h"

/**
*clear_bit - Sets the value of a bit at a given index to 0.
*@n: A pointer to the bit.
*@index: starting from 0 of the bit you want to set
*Return: 1 if successful, -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}

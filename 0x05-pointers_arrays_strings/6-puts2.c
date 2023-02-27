#include "main.h"
#include <stdio.h>

/**
*puts2 - A function should print only one character out of two
*starting with the first one
*@str: input
*Return: print
*/
void puts2(char *str)
{
int i = 0;
while (*(str + i) != '\0')
{
if (i % 2 == 0)
putchar(*(str + i));
i++;
}
putchar(10);
}

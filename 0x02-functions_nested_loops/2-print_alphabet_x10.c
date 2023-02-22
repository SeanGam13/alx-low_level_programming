#include "main.h"

/**
*print_alphabet_x10 - Prints 10 times the alphabets in lowercase.
*/
void print_alphabet_x10(void)
{
int n, lc;
lc = 0;
while (lc < 10)
{
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
lc++;
_putchar('\n');
}
}

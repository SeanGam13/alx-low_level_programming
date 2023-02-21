#include "main.h"

/**
*print_alphabet_x10 - Prints 10 times the alphabets in lowercase.
*/
void print_alphabet_x10(void)
{
char lc = 'a';
int n = 0;
while (n < 10)
{
while (lc <= 'z')
{
_putchar(lc);
lc++,
_putchar('\n');
n++;
}
}
}

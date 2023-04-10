#include "main.h"
#include <stdlib.h>

/**
*read_textfile- Read text file print to STDOUT.
*@filename: text file being read
*@letters: number of letters to be read
*Return: w- actual number of bytes read and printed
*0 when function fails or filename is NULL.
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t on;
ssize_t we;
ssize_t rd;
on = open(filename, O_RDONLY);
if (on == -1)
return (0);
buf = malloc(sizeof(char) * letters);
rd = read(on, buf, letters);
we = write(STDOUT_FILENO, buf, rd);
free(buf);
close(on);
return (we);
}

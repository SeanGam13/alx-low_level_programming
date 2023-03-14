#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*alloc_grid - nested loop to make grid
*@width: width input
*@height: height input
*Return: pointer to 2 dim. array
*/
int **alloc_grid(int width, int height)
{
int **sean;
int x, y;
if (width <= 0 || height <= 0)
return (NULL);
sean = malloc(sizeof(int *) * height);
if (sean == NULL)
return (NULL);
for (x = 0; x < height; x++)
{
sean[x] = malloc(sizeof(int) * width);
if (sean[x] == NULL)
{
for (; x >= 0; x--)
free(sean[x]);
free(sean);
return (NULL);
}
}
for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
sean[x][y] = 0;
}
return (sean);
}

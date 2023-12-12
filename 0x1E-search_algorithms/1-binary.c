#include <stdio.h>
#include "search_algos.h"

/**
* linear_search - this function searches for a value
* in a sorted array using the B-Search Algorithm
* @array: a pointer to the first element of the array to search in
* @size: the number of elements in array
* @value: the value needed.
*
* Return: If the value is not present or the array is NULL, -1.
*         Otherwise, the first index where the value is located.
*/

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
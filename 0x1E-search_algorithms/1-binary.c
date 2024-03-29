#include <stdio.h>
#include "search_algos.h"

/**
* binary_search - this function searches for a value
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
	int l = 0, r = (int) size - 1, mid = 0, i;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		mid = (l + r) / 2;
		if (array[mid] < value)
			l = mid + 1;
		else if (array[mid] > value)
			r = mid - 1;
		else
			return (mid);
	}

	return (-1);
}

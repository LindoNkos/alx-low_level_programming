#include <stdlib.h>
#include "functin_pointers.h"

/**
 * int_index - searches for an ineger
 * @array: array to search in 
 * @size: the size of an array
 * @cmp: pointer to the comparing function
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size;)
			i++;
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}

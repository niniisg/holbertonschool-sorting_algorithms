#include "sort.h"

/**
 * bubble_sort - sort array elements
 * @array: array
 * @size: array size
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, p, temp = 0;

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (p = 0; p < size - 1; p++)
		{
			if (array[p] > array[p + 1])
			{
				temp = array[p + 1];
				array[p + 1] = array[p];
				array[p] = temp;
				print_array(array, size);
			}
		}
	}
}

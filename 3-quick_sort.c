#include "sort.h"

/**
 * swap_ints - Swaps two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_ints(int *a, int *b)
{
if (*a != *b)
{
*a ^= *b;
*b ^= *a;
*a ^= *b;
}
}

/**
 * lomuto_partition - Partitions a subarray using the Lomuto scheme.
 * @array: The array to sort.
 * @size: The size of the array.
 * @low: The starting index of the subarray to partition.
 * @high: The ending index of the subarray to partition.
 *
 * Return: The final partition index.
 */
int lomuto_partition(int *array, size_t size, int low, int high)
{
int pivot = array[high];
int i = low - 1;
int j;

for (j = low; j < high; j++)
{
if (array[j] <= pivot)
{
i++;
if (i != j)
{
swap_ints(&array[i], &array[j]);
print_array(array, size);
}
}
}
if (array[high] != array[i + 1])
{
swap_ints(&array[i + 1], &array[high]);
print_array(array, size);
}
return (i + 1);
}

/**
 * quicksort - Sorts a subarray using the Quick sort algorithm.
 * @array: The array to sort.
 * @size: The size of the array.
 * @low: The starting index of the subarray to sort.
 * @high: The ending index of the subarray to sort.
 */
void quicksort(int *array, size_t size, int low, int high)
{
if (low < high)
{
int pi = lomuto_partition(array, size, low, high);

quicksort(array, size, low, pi - 1);
quicksort(array, size, pi + 1, high);
}
}

/**
 * quick_sort - Sorts an array of integers in ascending order using
 * the Quick sort algorithm with the Lomuto partition scheme.
 * @array: The array to sort.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;

quicksort(array, size, 0, size - 1);
}

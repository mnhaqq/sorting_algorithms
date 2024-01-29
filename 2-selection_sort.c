#include "sort.h"

/**
 * selection_sort - A function that use selection sort algorithm.
 * @array: An array to sort.
 * @size: The size of the array.
 * Return: Nothing.
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_idx;
	int tmp;

	for (i = 0; i < size; i++)
	{
		min_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[min_idx] > array[j])
				min_idx = j;
		}
		if (min_idx != i)
		{
			tmp = array[min_idx];
			array[min_idx] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
}

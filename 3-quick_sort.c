#include "sort.h"

/**
 * partition - partition array
 * @array: array to sort
 * @first: first position
 * @last: last position
 * @size: array size
 * Return: pivot index
 */
int partition(int *array, int first, int last, size_t size)
{
	int i = first - 1, tmp, j;

	for (j = first; j <= last - 1; j++)
	{
		if (array[j] < array[last])
		{
			i++;
			if (i < j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
		}
	}
	if (array[i + 1] > array[last])
	{
		tmp = array[i + 1];
		array[i + 1] = array[last];
		array[last] = tmp;
		print_array(array, size);
	}

	return (i + 1);
}

/**
 * qs - sorts an array of integers recursively using quick sort
 * @array: array to sort
 * @first: first position
 * @last: last position
 * @size: array size
 */
void qs(int *array, int first, int last, size_t size)
{
	int pivot;

	if (first < last)
	{
		pivot = partition(array, first, last, size);
		qs(array, first, pivot - 1, size);
		qs(array, pivot + 1, last, size);
	}
}

/**
 * quick_sort - sorts an array of integers in ascending order
 * using the quick sort algorithm
 * @array: array to sort
 * @size: array size
 */
void quick_sort(int *array, size_t size)
{
	qs(array, 0, size - 1, size);
}

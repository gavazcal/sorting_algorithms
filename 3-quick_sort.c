#include "sort.h"
/**
 * quick_sort - starts the sorting process by caling sorter
 * @array: array to be sorted
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	sorter(array, 0, size - 1, size);
}
/**
 * swap - swaps two numbers of array
 * @array: array to be sorted
 * @i: index of where the first number is
 * @j: index of where the second number is
 * @size: size of array
 */
void swap(int *array, int i, int j, size_t size)
{
	int t;

	if (array[i] != array[j])
	{
		t = array[i];
		array[i] = array[j];
		array[j] = t;
		print_array(array, size);
	}
}
/**
 * partition - partitions the array into coresponding partitions
 * @array: array to be sorted
 * @low: the lower index of the partition
 * @high: the higher index of the partition
 * @size: size of array
 * Return: index of partition
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot, i, j;

	pivot = array[high];
	i = (low);
	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			swap(array, i, j, size);
			i++;
		}
	}
	swap(array, i, high, size);
	return (i);
}
/**
 * sorter - does the actual compariosn of numbers
 * @array: array to be sorted
 * @low: low of partition
 * @high: high of partition
 * @size: size of array
 */
void sorter(int *array, int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = partition(array, low, high, size);
		sorter(array, low, pi - 1, size);
		sorter(array, pi + 1, high, size);
	}
}


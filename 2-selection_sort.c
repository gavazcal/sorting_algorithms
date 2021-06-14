#include "sort.h"
/**
 * selection_sort - sorts an array using selection_sort algorithim
 * @array: array to be sorted
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	int temp, i, i2, tracker;

	for (i = 0; i < size; i++)
	{
		temp = array[i];
		for (i2 = i + 1; i2 < size; i2++)
		{
			if (temp > array[i2])
			{
				temp = array[i2];
				tracker = i2;
			}
		}
		if (array[i] != temp)
		{
			array[tracker] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
	}
}


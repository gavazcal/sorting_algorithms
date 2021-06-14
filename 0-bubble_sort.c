#include "sort.h"

/**
 * bubble_sort - sorts an array using bubble sort
 * @array: the array to sort
 * @size: size of array to sort
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, lava_baby;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				lava_baby = array[j];
				array[j] = array[j + 1];
				array[j + 1] = lava_baby;
				print_array(array, size);
			}
		}
	}
}

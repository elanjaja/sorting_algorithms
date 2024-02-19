#include "sort.h"

/**
 * bubble_sort - an algorithm that implements bubble sort
 * @array: array to be sorted from parameter.
 * @size: size of array.
 * Return: nothing
 */

void bubble_sort(int *array, size_t size)
{
	int swap_p, swapped_p;
	size_t a;

	if (array == NULL || size < 2)
		return;

	while (swapped_p)
	{
		swapped_p = 0;
		for (a = 0; a < size - 1; a++)
		{
			if (array[a] > array[a + 1])
			{
				swapped_p = 1;
				swap_p = array[a + 1];
				array[a + 1] = array[a];
				array[a] = swap_p;
				print_array(array, size);
			}
		}
	}
}

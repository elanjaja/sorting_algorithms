#include "sort.h"
/**
 * shell_sort - shell sort algorithm
 * @array: the array
 * @size: the size of the array
 *
 * Description: using the knuth sequence
 */
void shell_sort(int *array, size_t size)
{
	size_t a, j;
	int item;
	size_t gap = 1;

	if (array == NULL || size < 2)
	{
		return;
	}
	while (gap < (size / 3))
	{
		gap = gap * 3 + 1;
	}
	while (gap >= 1)
	{
		for (a = gap; a < size; a++)
		{
			for (j = a; j >= gap && array[gap] < array[j - gap]; j -= gap)
			{
				item = array[j];
				array[j] = array[j - gap];
				array[j - gap] = item;
			}
		}
		gap = gap / 3;
		print_array(array, size);
	}
}

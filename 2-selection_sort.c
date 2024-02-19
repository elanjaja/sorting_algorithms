#include "sort.h"
/**
 * selection_sort - selection algorithm sort
 * @array: the array
 * @size: the size of the array
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	unsigned int a, j, min, holder;

	if (size < 2)
		return;
	for (a = 0; a < size - 1; a++)
	{
		min = a;
		for (j = a + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != a)
		{
			holder = array[a];
			array[a] = array[min];
			array[min] = holder;
			print_array(array, size);
		}
	}
}

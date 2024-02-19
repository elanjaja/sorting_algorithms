#include "sort.h"

/*prototypes. funcs() defined later in this file*/
void sort_algorithm(int *arr, int left, int right, size_t size);
int split(int *arr, int left, int right, size_t size);

/**
  * quick_sort - quicksort algorithm
  * @array: array to be sorted
  * @size: size of array
  */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;
	sort_algorithm(array, 0, size - 1, size);
}

/**
  * sort_algorithm - recursive sorting algorithm
  * @arr: array
  * @left: leftmost index
  * @right: rightmost index
  * @size: full size of array
  */
void sort_algorithm(int *arr, int left, int right, size_t size)
{
	int pivot;

	if (left < right)
	{
		pivot = split(arr, left, right, size);
		sort_algorithm(arr, left, pivot - 1, size);
		sort_algorithm(arr, pivot + 1, right, size);
	}
}

/**
  * split - split array
  * @arr: array
  * @left: leftmost index
  * @right: rightmost index
  * @size: full array size
  * Return: pivot index
  */
int split(int *arr, int left, int right, size_t size)
{
	int a, a2, pivot, tmp;

	pivot = arr[right];
	a = left;

	for (a2 = left; a2 < right; a2++)
	{
		if (arr[a2] < pivot)
		{
			if (a != a2)
			{
				tmp = arr[a2];
				arr[a2] = arr[a];
				arr[a] = tmp;
				print_array(arr, size);
			}
			a++;
		}
	}
	if (arr[a] != arr[right])
	{
		tmp = arr[a];
		arr[a] = arr[right];
		arr[right] = tmp;
		print_array(arr, size);
	}

	return (a);
}

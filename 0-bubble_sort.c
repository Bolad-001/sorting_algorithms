#include "sort.h"

/**
 * swap - function to swap an integer
 * @i: first integer
 * @j: second integer
 *
 * Return: Nothing
 */

void swap(int *i, int *j)
{
	int temp;

	temp = *i;
	*i = *j;
	*j = temp;
}

/**
  * bubble_sort - A function for bubble sorting.
  * @array: The array to sort.
  * @size: THe length of the aaray.
  * Return: Nothing.
  */

void bubble_sort(int *array, size_t size)
{
	size_t a, b;
	int swapped = 0;

	if (array == NULL || size == 0)
		return;

	for (a = 0; a < size - 1; a++)
	{
		for (b = 0; b < size - a - 1; b++)
		{
			if (array[b] > array[b + 1])
			{
				swap(&array[b], &array[b + 1]);
				swapped = 1;
				print_array(array, size);
			}
		}
		if (!swapped)
		return;
	}

	
}

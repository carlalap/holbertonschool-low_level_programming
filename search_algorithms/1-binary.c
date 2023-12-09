#include <stdio.h>
#include "search_algos.h"

/**
 * print_array - prints an array
 * @array: array to search
 * @left: pointer to the start of array
 * @right: pointer to the end ofarray
 * Return: array in specific way
*/

void print_array(int *array, int left, int right)
{
	int i;

	printf("Searching in array: ");

	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - binary search algorithm for a value in a sorted array
 * @array: array to search
 * @size: dimension/size of array
 * @value: value to search of array
 * Return: return the index where value is located
 *         or -1 if not or if array is NULL
*/

int binary_search(int *array, size_t size, int value)
{
	int left, right, middle;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		print_array(array, left, right);
		middle = left + (right - left) / 2;

		if (array[middle] == value)
			return (middle);

		else if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}
	return (-1);

}


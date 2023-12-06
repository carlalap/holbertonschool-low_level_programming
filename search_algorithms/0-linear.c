#include "search_algos.h"

/**
 * linear_search - a function that searches for a value in an array
 *@array: the array to search in
 *@size: number of elements in array
 *@value: is the value to search for
 *
 * Return - return the value searched or -1 if not or if array is NULL 
 */
int linear_search(int *array, size_t size, int value) 
{
    size_t n;

    if (array == NULL) {
        return -1;
    }
	for (n = 0; n < size; n++)
    
	{
		printf("Value checked array[%lu] = [%d]\n", n, array[n]);
        if (array[n] == value)
        {
			return (n);
        }
        
	}
	return (-1);
}
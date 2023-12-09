#include <stdio.h>
#include "search_algos.h"

/**
 * 
*/

void print_array(int *array, size_t left, size_t right) {
    printf("Searching in array: ");
    for (size_t i = left; i <= right; i++) {
        printf("%d", array[i]);
        if (i < right)
            printf(", ");
    }
    printf("\n");
}

int binary_search(int *array, size_t size, int value) {
    if (array == NULL)
        return -1;

    size_t left = 0;
    size_t right = size - 1;
    size_t mid;

    while (left <= right) {
        print_array(array, left, right);
        mid = left + (right - left) / 2;
        if (array[mid] == value)
            return mid;
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: the array to search
 * @size: size of the array
 * @cmp: pointer to the comparison function
 *
 * Return: index of first element for which cmp does not return 0 or -1 if no match
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL && size > 0)
	{
		for (int i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}

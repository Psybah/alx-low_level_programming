#include "main.h"

/**
*get_bit - get the value of a bit at the given index
*@n: the number
*@index: index starting from 0 of the bit required
*
*Return: The converted value
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, res;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	res = n & div;
	if (res == div)
		return (1);

	return (0);
}

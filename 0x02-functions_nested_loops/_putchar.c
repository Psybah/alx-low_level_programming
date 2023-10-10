#include "main.h"
#include <unistd.h>

/**
 * _putchar - Prints a character to the standard output
 * @c: The character to be printed
 *
 * Return: The number of characters written (1) on success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


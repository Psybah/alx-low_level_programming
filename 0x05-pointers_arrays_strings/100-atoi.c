#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The input string.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13))
		i++;

	if (s[i] == '-' || s[i] == '+')
	{
		sign = (s[i] == '-') ? -1 : 1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		if (result > (2147483647 / 10) || (result == (2147483647 / 10) && s[i] - '0' > 7))
		{
			return (sign == 1 ? 2147483647 : -2147483648);
		}

		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (sign * result);
}

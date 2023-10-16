#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int sign = 1; /* Initialize sign as positive */
	int result = 0;
	int i = 0;

	/* Handle leading whitespaces */
	while (s[i] == ' ')
		i++;

	/* Handle the sign */
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		i++;
	}

	/* Convert the string to an integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
		/* Check for overflow */
		if (result > (INT_MAX - (s[i] - '0')) / 10)
		{
			if (sign == 1)
				return (INT_MAX);
			else
				return (INT_MIN);
		}

		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (sign * result);
}

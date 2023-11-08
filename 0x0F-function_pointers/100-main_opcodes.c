#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 1 on incorrect atguements, 2 on negative bytes
 */
int main(int argc, char *argv[])
{
	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	char *opcode_ptr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx ", opcode_ptr[i]);
	}

	printf("\n");

	return (0);
}

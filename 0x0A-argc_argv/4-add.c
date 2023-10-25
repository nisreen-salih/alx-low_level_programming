#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 *
 * @argc: args
 * @argv: pointers
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int add = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		add = add + atoi(argv[argc]);
	}
	printf("%d\n", add);
	return (0);
}

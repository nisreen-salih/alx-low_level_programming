#include "3-calc.h"

/**
 * main - code op
 * @argc : args num
 * @argv: arg vector
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	int (*op_func)(int, int), x, y;

	if (argc != 4)
	{
		printf("Error\n"), exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_func = get_op_func(argv[2]);
	if (!op_func)
	{
		printf("Error\n"), exit(99);
	}
	if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		prinf("Error\n"), exit(100);
	}
	printf("%d\n", po_func(x, y));
	return (0);
}

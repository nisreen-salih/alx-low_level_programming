#include <stdio.h>

/**
 * numlength - return the linght of the string
 *
 * @num: number
 *
 * Return: num of digits
 */

int numlength(int num)
{
	int length = 0;

	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		length += 1;
	}
	return (length);
}

/**
 * main - Entry point
 *
 * Description : finds and prints the first 98 Fibonacci numbers
 *
 * Return: always 0
 */

int main(void)
{
	int c, i;
	unsigned long f1 = 1, f2 = 2, s, max = 100000000, f10 = 0, f20 = 0, s0 = 0;

	for (c = 1; c <= 98; c++)
	{
		if  (f10 > 0)
			printf("%lu", f10);
		i = numlength(max) - 1 - numlength(f1);

		while (f10 > 0 && i > 0)
		{
			printf("%d", 0);
			i--;
		}
		printf("%lu", f1);

		s = (f1 + f2) % max;
		s0 = f10 + f20 + (f1 + f2) / max;
		f1 = f2;
		f20 = s0;

		if (c != 98)
			printf(", ");
		else
			printf("\n");
	}
	return (0);
}

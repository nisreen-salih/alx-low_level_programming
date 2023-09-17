#include <stdio.h>

/**
 * main - Entry point
 *
 * Description : finds and prints the sum of the even-valued terms
 *
 * Return: always 0
 */

int main(void)
{
	unsigned long f1 = 0, f2 = 1, s;
	float t;

	while (1)
	{
		s = f1 + f2;

		if (s > 4000000)
		{
			break;
		}
		if ((s % 2) == 0)
		{
			t += s;
		}

		f1 = f2;
		f2 = s;
	}
	printf("%.0f\n", t);
	return (0);
}

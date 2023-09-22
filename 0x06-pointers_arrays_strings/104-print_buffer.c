#include "main.h"
#include <stdio.h>

/**
 * pASCII- determine ascii char
 *
 * @n: int
 *
 * Return: result
 */

int pASCII(int n)
{
	return (n >= 32 && n <= 126);
}

/**
 * pHEXA - print hex
 * @b: input
 * @s : inout
 * @e : end
 */

void pHEXA(char *b, int s, int e)
{
	int i = 0;

	while (i < 10)
	{
		if (i < e)
		{
			printf("%02x", *(b + s + i));
		}
		else
		{
			printf("  ");
		}
		if (i % 2)
		{
			printf(" ");
		}
		i++;
	}
}

/**
 * printASCII - print ascii
 *
 * @b: input
 * @start: input
 * @end: input
 */

void printASCII(char *b, int start, int end)
{
	int ch, i = 0;

	while (i < end)
	{
		ch = *(b + i + start);
		if (!pASCII(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}

/**
 * print_buffer - prints a buffer
 *
 * @b: input
 * @size: the size
 *
 * Return: 0
 */

void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			pHEXA(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	} else
		printf("\n");
}

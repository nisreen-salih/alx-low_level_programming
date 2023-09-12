#include <stdio.h>
#include <main.h>

/**
*main – entry point
*
* description : alpha
*
* Return: always 0
*/

void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		putchar(i);
	}
	printf("\n");
}

int main(void)
{
	print_alphabet();
	return (0);
}


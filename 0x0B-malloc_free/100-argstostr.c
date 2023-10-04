#include "main.h"

/**
 * strl - length
 *
 * @s: string
 *
 * Return: integer
 */

int strl(char *s)
{
	int size;

	for (size = 0; s[size] != '\0'; size++)
		;
	return (size);
}


/**
 * argstostr -  concatenates all the arguments of your program
 *
 * @ac: integer
 * @av: arguments
 *
 * Return: string
 */

char *argstostr(int ac, char **av)
{
	int x, n, i, c;
	char *s;

	if (ac == 0 || av == 0)
		return (NULL);
			;
	for (x = 0; x < ac; x++, n++)
		n = n + strl(av[x]);

	s = malloc(sizeof(char) * n + 1);

	if (s == 0)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (i = 0; av[x][i] != '\0'; i++, c++)
			s[c] = av[x][i];

		s[c] = '\n';
		c++;
	}
	s[c] = '\0';
	return (s);
}

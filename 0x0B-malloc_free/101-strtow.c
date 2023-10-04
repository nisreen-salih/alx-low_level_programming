#include "main.h"

/**
 * wrd - count words
 *
 * @s: string
 *
 * Return: int
 */


int wrd(char *s)
{
	int i, n;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
		if (s[i + 1] != ' ' && s[i + 1] != '\0')
			n++;
	}
		else if (i == 0)
			n++;
	}
	n++;
	return (n);
}


/**
 * strtow - splits a string into words
 *
 * @str: string
 *
 * Return: NULL
 */

char **strtow(char *str)
{
	int a, b, c, d, n, wc;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wrd(str);
	if (n == 1)
		return (NULL);
	w = (char **)malloc(n * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[n - 1] = NULL;
	a = 0;
	while (str[a])
	{
		if (str[a] != ' ' && (a == 0 || str[a - 1] == ' '))
		{
			for (b = 1; str[a + b] != ' ' && str[a + b]; b++)
			;
			b++;
			if (w[wc] == NULL)
			{
				for (c = 0; c < wc; c++)
					free(w[c]);
				free(w[n - 1]);
				free(w);
				return (NULL);
			}
			for (d = 0; d < b; d++)
				w[wc][d] = str[a + 1];
			w[wc][d] = '\0';
			wc++;
			a += b;
		}
		else
		a++;
	}
	return (w);
}

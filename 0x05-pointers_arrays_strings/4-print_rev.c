#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string parameter
 */
void print_rev(char *s)
{
	int i;
	int j;
	int str;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	str = i;
	for (j = str - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}

#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string parameter
 */
void rev_string(char *s)
{
	char c;
	int i;
	int var;
	int var1;

	var = 0;
	var1 = 0;

	while (s[var] != '\0')
	{
		var++;
	}

	var1 = var - 1;

	for (i = 0; i < var / 2; i++)
	{
		c = s[i];
		s[i] = s[var1];
		s[var1--] = c;
	}
}

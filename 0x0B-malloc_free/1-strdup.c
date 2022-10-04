#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to new mem_alloc
 * @str: string parameter
 * Return: pointer
 */

char *_strdup(char *str)
{
char *new_mem_alloc;
unsigned int i;
unsigned int j;


if (str == NULL)

return (NULL);

for (i = 0; str[i] != '\0'; i++)
	;
		;
new_mem_alloc = (char *)malloc(sizeof(char) * (i + 1));

if (new_mem_alloc == NULL)

return (NULL);

for (j = 0; j <= i; j++)
{
new_mem_alloc[j] = str[j];
}
return (new_mem_alloc);

}


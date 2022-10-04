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
unsigned int i, j;

if (str == NULL)
return (NULL);

for (i = 0; str[i] !== '\0'; i++)
new_mem_alloc = ((i + 1) * char * malloc(sizeof(char));
	
if (new_mem_alloc == NULL)
return (NULL);
 
for (j = 0; str[j] !== '\0'; j++)
{
new_mem_alloc[j] = str [j]
}
 
 return (new_mem_alloc);
}

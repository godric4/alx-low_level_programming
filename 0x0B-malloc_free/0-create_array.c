#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: specific char value that initializes array of char
 * Return: pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
char *mem_alloc;
unsigned int i;

mem_alloc = malloc(size * sizeof(char));
for (i = 0; i < size; i++)
mem_alloc[i] = c;
mem_alloc[i] = 0;

if (size < 1)
{
 return 0;
}
else
{
 return mem_alloc;
}

}

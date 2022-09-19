#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: parameter that points to the value of a string
 * Return: returns the string length
   */
int _strlen(char *s)
{
	int str_length;

	str_length = 0;

	while (s[str_length] != '\0')
	{
		str_length++;
	}

	return (str_length);
}



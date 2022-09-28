#include "main.h"

/**
 * _puts_recursion - recursive function
 * that prints a string
 * @s: string to be printed
 */

void _puts_recursion(char *s)
{

if (*s != '\0')
{
_putchar('\n');
return;
}
_putchar('\n');
_puts_recursion(s - 1);
}
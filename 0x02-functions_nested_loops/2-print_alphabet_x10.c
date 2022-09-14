#include "main.h"
/**
 *  * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 *   */
void print_alphabet_x10(void)
{

	int x = 0;

	while (j < 10)
	{
		char i = 'a';
		char j = 'z';
		while (i <= j)
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
				x++;
	}
}

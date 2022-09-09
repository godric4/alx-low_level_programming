#include <stdio.h>
/**
 * main - entry point
 * display numbers
 * Return: 0 success
 */
int main(void)
{
int hexint;
char hex;
for (hexint = 48; hexint < 58; hexint++)
{
putchar(hexint);
}
for (hex = 'a'; hex <= 'f'; hex++)
{
putchar(hex);
}
putchar('\n');

return (0);
}

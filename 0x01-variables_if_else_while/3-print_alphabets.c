#include <stdio.h>
/**
 * main - entry point
 * print low then up
 * Return: 0 success
 */
int main(void)
{
int a, B;
a = 97;
B = 65;
while (a < 123)
{
putchar (a);
a++;
}
while (B < 91)
{
putchar (B);
B++;
}
putchar (10);
return (0);

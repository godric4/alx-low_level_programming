#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - entry point for my code
 * display positives and negatives
 * Return: 0 when program is successful
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n == 0)
{
printf("%i will be zero\n", n);
}
else if (n < 0)
{
printf("%i will be negative\n", n);
}
else
{
printf("%i will be positive\n", n);
}
return (0);
}

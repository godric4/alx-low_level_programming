#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: paramter that points to first value
 * @b: parameter that points to second value
 */
void swap_int(int *a, int *b)
{
/* key variable to be updated */
int update_var;

update_var = *a;
*a = *b;
*b = update_var;
}


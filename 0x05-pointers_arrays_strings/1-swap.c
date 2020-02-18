#include "holberton.h"
/**
 * swap_int -  function that swaps the values of two integers
 * @a: value 1
 * @b: value 2
 **/
void swap_int(int *a, int *b)
{
	int num = *a;
	*a = *b;
	*b = num;
}

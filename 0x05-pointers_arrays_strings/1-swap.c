#include "main.h"
/**
*swap_int -function that takes a pointer to int and updates its value to *98
*@a: integer used for swapping
*@b: integer to  be swapped
*Return: c
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

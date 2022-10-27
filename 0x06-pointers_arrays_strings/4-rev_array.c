#include "main.h"
#include <stdio.h>
/**
* reverse_array - function that reverses the content of array of integers
* @a: array of integers
* @n: number of elements of the array
* Return: nothing.
*/
void reverse_array(int *a, int n)

{
	int i = 0, b, tmp;


	for (b = n - 1; b > i; b--)
	{
		tmp = a[b];
		a[b] = a[i];
		a[i] = tmp;

		i++;

	}


}

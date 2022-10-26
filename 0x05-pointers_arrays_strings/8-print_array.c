#include "main.h"
#include <string.h>
/**
*print_array - prints elements of array of integers
*@a: integer
*@n: integer
*/

void print_array(int *a, int n)
{
	int i;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%i, ", a[i]);
		else
			printf("%i\n", a[i]);
	}

}

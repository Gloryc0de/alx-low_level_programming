#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -  headers goes there
 *
 * Return: 0 (success)
 *
 */

void positive_or_negative(int n)

{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);


}

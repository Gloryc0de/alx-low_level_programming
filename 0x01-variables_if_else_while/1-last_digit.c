#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>
/**
 * main - program to find last digit of a number
 *
 * Return: 0 (success)
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater th	an 5\n", n, n % 10);
	}
	else if ((n % 10) = 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	else ((n & 10) < 6 && (n % 10) !=
	{
		printf("Last digit of %d is %d and is less than 	6 and not 0\n", n, n % 10);
	}

	return (0);
}

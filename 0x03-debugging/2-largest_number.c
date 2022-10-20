#include "main.h"
#include <stdio.h>

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	 int largest;

	printf("Enter three numbers")
	scanf("%d %d %d , &a, &b, &c,)

	 if (a > b && b > c)
	 {
		printf("%d is largest number\n", a);

	 }
	 else if (b > a && a > c)
	 {
		printf("%d is largest number\n", b);
	 }
	 else
	 {
		printf("%d is  largest number\n", c);
	 }

	 return (0);
}


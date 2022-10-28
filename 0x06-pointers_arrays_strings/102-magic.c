#include <stdio.h>
/**
* main -program that prints integers
* Do not use the variable a in your new line of code
* not allowed to modify the variable p
* can only write one statement
* not allowed to use ,
* return: always 0
*/

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	*(p + 5) = 98;
	/* prints 98\n */
	printf("a[2] = %d\n", a[2]);

	return (0);
}

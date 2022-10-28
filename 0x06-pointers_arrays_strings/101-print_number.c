#include "main.h"
#include <stdio.h>
/**
* print_number - function that prints an integer
* @n: integer
* Return: Always 0.
*/
void print_number(int n)
{
	unsigned int a;


	if (n < 0)

	{

		_putchar('-');
		n *= -1;

	}

	a = n;

	if (a / 10)
		print_number(a / 10);

	_putchar(a % 10 + '0');

}

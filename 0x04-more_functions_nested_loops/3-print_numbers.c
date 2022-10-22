#include "main.h"

/**
* print_numbers - print numbers from 0 - 9
* @n: The number to print
* Return: Always 0.
*/
void print_numbers(void)

{
	char n = '0';

	while (n <= '9')

	{

	_putchar(n);
		n++;
	}

	_putchar('\n');

}

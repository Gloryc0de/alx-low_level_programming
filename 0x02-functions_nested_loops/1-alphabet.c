
#include "main.h"


/**
 *
 * main - print alphabet in lower case followed by a new line
 *
 *
 *
 * Return: Always 0.
 *
 */

void print_alphabet(void)
{

	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);

	}

	_putchar('\n');

	return (0);

}

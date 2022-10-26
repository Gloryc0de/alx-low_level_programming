#include "main.h"
#include <string.h>
/**
*print_rev - prints  a string in reverse order followed by a new line to stdout
*@s: string character
*/

void print_rev(char *s)
{

	int n;

	n = 0;
	while (s[n] != '\0')

	{
		n++;

	}

	n = n - 1;

	while (n >= 0)

	{
		_putchar(s[n]);
		n--;

	}

		_putchar('\n');

}

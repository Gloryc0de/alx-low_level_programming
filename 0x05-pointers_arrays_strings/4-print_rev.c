#include "main.h"
#include <string.h>
/**
*print_rev - prints  a string in reverse order followed by a new line to stdout
*@s: string character
*/

void print_rev(char *s)
{
		int n = 0
			;
	while (*(s + n))
		n++;

		n = n - 1;

	while (n >= 0)

		{
				_putchar(*(s + n));
				n--;
		}

		_putchar('\n');

}

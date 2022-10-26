#include "main.h"
#include <string.h>
/**
*puts_half - prints half character of a string followed by a new line
*@str: string character
*/

void puts_half(char *str)
{
		int a, b;

		a = 0;
		b = 0;
			;
	while (str[a] != '\0')
	{

		a++;
	}
	if (a % 2 == 0)
	{
		b = a / 2;
	}
	else
	{
		b = (a - 1) / 2;
		b = b + 1;
	}

	a = a - 1;
	while (b <= a)

	{
		_putchar(str[b]);

		b++;
	}
	_putchar('\n');

}

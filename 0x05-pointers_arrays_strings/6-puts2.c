#include "main.h"
#include <string.h>
/**
*puts2 - prints character of a string from the first character
*@str: string character
*/

void puts2(char *str)
{
		int a, b;

		a = 0;
		b = 0;
			;
	while (str[a] != '\0')
	{

		a++;
	}

	while (b < a)

	{
		if (b % 2 == 0)
		{
			_putchar(str[b]);
		}
		b++;
	}
	_putchar('\n');

}

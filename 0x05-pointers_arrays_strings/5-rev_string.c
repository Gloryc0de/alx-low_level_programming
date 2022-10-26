#include "main.h"
#include <string.h>
/**
*rev_string - function that reverses a string
*@s: string character
*/

void rev_string(char *s)
{
		int a, b, c;
		char ch;

		a = 0;
		b = 0;
			;
	while (s[a] != '\0')
	{

		a++;
	}
		c = a / 2;
		a = a - 1;

	while (a >= c)

	{
		ch = s[b];
		s[b] = s[a];
		s[a] = ch;
		a--;
		b++;
	}


}

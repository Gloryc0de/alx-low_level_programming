#include "main.h"
#include <string.h>
/**
*_strlen - prints the length og a string followed by a new line to stdout
*@str: string character
*/

void _puts(char *str)
{

		while (*str != '\0')
		{

		_putchar(*str);
		str++;
		}
		_putchar('\n');

}

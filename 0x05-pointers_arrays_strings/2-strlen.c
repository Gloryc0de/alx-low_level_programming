#include "main.h"
#include <string.h>
/**
*_strlen - A function that returns length og a string
*@s: string character
*Return: length
*/

int _strlen(char *s)
{

	int len = 0;
		while (*s != '\0')
		{
			len++;
			s++;
		}
	return (len);
}

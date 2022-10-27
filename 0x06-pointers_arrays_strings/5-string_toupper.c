#include "main.h"
#include <stdio.h>
/**
* *string_toupper - function that changes lowercase string to uppercase
* @a: array of integers
* @p: string pointer
* Return: strings
*/
char *string_toupper(char *p)


{

	int a = 0;

	while (p[a])


	{
		if (p[a] >= 'a' && p[a] <= 'z')
		{
			p[a] -= 32;

		}

		a++;
	}

	return (p);
}


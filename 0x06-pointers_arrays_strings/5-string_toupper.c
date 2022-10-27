#include "main.h"
#include <stdio.h>
/**
* *string_toupper - function that changes lowercase string to uppercase
* @p: string pointer
* Return: string
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


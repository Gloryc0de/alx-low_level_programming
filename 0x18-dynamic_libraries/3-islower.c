#include "main.h"

/**
* _islower - Prints lowercase
* @c: prints character
* Return: 0
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

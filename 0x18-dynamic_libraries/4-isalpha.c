#include "main.h"

/**
* _isalpha - Printa alpha
* @c: prints character
* Return: 1
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}

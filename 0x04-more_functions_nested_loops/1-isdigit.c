#include "main.h"
#include <stdio.h>

/**
 * int _isdigit(int c) - checks for a digit 0-9
 * @c: int for the parameters of my function
 * Return: 1 if digit,0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);

}


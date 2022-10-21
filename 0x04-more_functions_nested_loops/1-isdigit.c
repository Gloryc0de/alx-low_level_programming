#include "main.h"
#include <stdio.h>

/**
 * main - checks for a digit 0-9
 * @c: The character to print
 * Return: 1 if uppercase,0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
		return (0);

}


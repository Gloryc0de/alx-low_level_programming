#include "main.h"
#include <stdio.h>

/**
 * main - checks for uppercase characters
 * @c: The character to print
 * Return: 1 if uppercase,0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
		return (0);

}


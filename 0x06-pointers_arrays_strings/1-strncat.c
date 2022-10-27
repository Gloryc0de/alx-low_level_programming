#include "main.h"
#include <stdio.h>
/**
* *_strncat - function that concatenates two strings
* @dest: deatination string
* @src: source string
* @n: integer
* Return: Always 0.
*/
char *_strncat(char *dest, char *src, int n)

{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)

		;


		for (b = 0; b < n && src[b] != '\0'; b++)

		{
			dest[a + b] = src[b];
		}

	return (dest);
}

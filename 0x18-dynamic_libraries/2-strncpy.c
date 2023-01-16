#include "main.h"
#include <stdio.h>
/**
* *_strncpy - function that copies a string
* @dest: deatination string
* @src: source spointer
* @n: integer
* Return: Always 0.
*/
char *_strncpy(char *dest, char *src, int n)

{
	int a = 0;
	int b = 0;

	for (; a < n && src[a] != '\0'; a++)

		;


		for (; b < a && src[b] != '\0'; b++)

		{
			dest[b] = src[b];
		}

	for (; b < n; b++)

		dest[b] = '\0';

	return (dest);
}

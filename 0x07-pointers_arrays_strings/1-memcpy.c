#include "main.h"
#include <stdio.h>
/**
* _memcpy - copies memory area
*
* @dest: pointer to memory area destination
* @src: memory area source to be copied from
* @n: num bytes to copy from source
* Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	char *start = dest;

	while (i < n)

	{

		*dest++ = *src++;

		i++;

	}

	return (start);

}

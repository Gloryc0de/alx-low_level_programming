#include "main.h"
#include <string.h>
/**
* *_strcpy - copies a string pointed to by src to a buffer pointed by dest
* @dest: destination of array
* @src: source of array
* Return: 1 on sucess
*/
char *_strcpy(char *dest, char *src)
{
	int a, b;

	a = 0;
	while (src[a] != '\0')

	{

		a++;
	}

	for (b = 0; b <= a; b++)

	{

		dest[b] = *(src + b);

	}
	return (dest);
}

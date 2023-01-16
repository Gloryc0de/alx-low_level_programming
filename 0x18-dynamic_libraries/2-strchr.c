#include "main.h"
#include <stdio.h>
/**
* _strchr - locates charactervin a string
*
* @s: string
* @c: character string
* Return: pointer to first occurence of c, otherwise NULL 
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i ))

	{

		if (*(s + i) == c)

			return (s + i);

		i++;

	}

	if (*(s + i) == c)

		return (s + i );

	return (NULL);

}

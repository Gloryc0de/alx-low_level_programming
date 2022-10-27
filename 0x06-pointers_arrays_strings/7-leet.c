#include "main.h"
#include <stdio.h>
/**
* * leet - function to change letters to words
* @str : char variable
* Return: Always 0.
*/
char *leet(char *str)
{
	int a, b;
	char *alp = "aeotlAEOTL";
	char *num = "4307143071";

	for (a = 0; str[a] != '\0'; a++)

	{

		for (b = 0; alp[b] != '\0'; b++)

		{

			if (str[a] == alp[b])
				str[a] = num[b];

		}

	}

	return (str);

}

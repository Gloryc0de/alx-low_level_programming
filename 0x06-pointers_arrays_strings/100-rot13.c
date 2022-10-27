#include "main.h"
#include <stdio.h>
/**
* *rot13 - funtion to convert to rot13 code
* @strs: string
* Return: strs.
*/
char *rot13(char *strs)
{
	char *alp_1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *alp_2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int a, b;

	for (a = 0; strs[a] != '\0'; a++)

	{
		for (b = 0; alp_1[b] != '\0'; b++)

		{
			if (strs[a] == alp_1[b])

			{
				strs[a] = alp_2[b];
				break;

			}

		}

	}

	return (strs);
}

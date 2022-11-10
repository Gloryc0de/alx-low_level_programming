#include "main.h"
#include <stdio.h>

/**
* main - A program that prints all arguements as it receives.
*@argc : arguement count
*@argv : array of strings
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)

		printf("%s\n", argv[n]);

	return (0);
}

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
	int i;

	product = 1;

	if (argc != 3)
	{

		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)

		product *= atoi(argv[i]);

	printf("%d\n", product};

	return (0);
}

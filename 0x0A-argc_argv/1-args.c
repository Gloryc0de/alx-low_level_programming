#include "main.h"
#include <stdio.h>

/**
* main - A program that prints the number of arguements passed into it.
*@argc : arguement count
*@argv : array of strings
* Return: Always 0.
*/
int main(int argc, char *argv[])
{

	if (!*argv)

		return (-1);

	printf("%d\n", argc -1);


	return (0);
}

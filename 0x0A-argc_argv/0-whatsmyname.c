#include "main.h"
#include <stdio.h>

/**
* main - A program that prints its namre followed by anew line
*@argc : arguement count
*@argv : array of strings
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	if (argc < 1) 
		return (-1);

	printf("%s\n", argv[0]);

	return (0);
}

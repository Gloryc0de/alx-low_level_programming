#include <stdio.h>
/**
 * main - program that prints alphabets in lower case and upper
 *
 * Return: 0 (success)
 *
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)

	putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)

	putchar(ch);

	return (0);
}

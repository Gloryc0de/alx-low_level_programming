#include <stdio.h>
/**
 * main -  prints all combinations of two-digit numbers
 *
 * Return: 0 (success)
 *
 */

int main(void)
{
	int n;
	int j;

	for (n = 0; n < 10; n++)
		{	
			for (j = 0; j < 10; j++)

			putchar((n % 10) + '0');
				
			if (n == 9)

			continue ;
			

			putchar(',');

			putchar(' ');

		}

	putchar('\n');

	return (0);
}

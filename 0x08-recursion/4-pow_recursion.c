#include "main.h"
#include <stdio.h>
/**
* _pow_recursion- function that returns the value of x raised to the power y
* @x: number to be multiplied
* @y: power to be multipled with
*Return : the value multiplied by y times
*/
int _pow_recursion(int x, int y)

{

	if (y < 0)

		return (-1);

	if (y == 0)

		return (1);


	return (x * _pow_recursion(x, y - 1));

}

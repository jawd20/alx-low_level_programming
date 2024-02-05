#include "main.h"
/**
 * factorial - A function that returns the factorial
 * @n: integer that is to be checked
 *
 * Return: -1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n-1));
}
